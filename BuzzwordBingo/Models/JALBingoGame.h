//
//  JALBingoGame.h
//  BuzzwordBingo
//
//  Created by Jamie Ly on 16/09/2012.
//  Copyright (c) 2012 Jamie Ly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JALBoard.h"
#import "JALHistory.h"
#import "WordList.h"

@interface JALBingoGame : NSObject

-(id) initWithWordList: (WordList*) list;
-(BOOL) playWord: (NSString*) word;
// All words that have been played this game
-(NSArray*) playedWords;
// Words that have been marked on the board
-(NSArray*) markedWords;

@property (nonatomic, strong) JALHistory *history;
@property (nonatomic, strong) JALBoard *board;
@property (nonatomic, strong, readonly) NSArray *boardWords;
@property (nonatomic, strong) WordList *wordList;
@property (nonatomic, assign, readonly) BOOL isBingo;

@end

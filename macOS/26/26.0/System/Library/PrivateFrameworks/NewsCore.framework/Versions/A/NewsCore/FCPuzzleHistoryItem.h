@class NSString, NSData, NSDate, NSNumber, CKRecord;

@interface FCPuzzleHistoryItem : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *puzzleID;
@property (readonly, copy, nonatomic) NSString *puzzleTypeID;
@property (readonly, nonatomic) NSData *progressData;
@property (readonly, nonatomic) long long progressLevel;
@property (readonly, nonatomic) NSNumber *score;
@property (readonly, nonatomic) NSNumber *scoreType;
@property (readonly, copy, nonatomic) NSString *rankID;
@property (readonly, nonatomic) NSNumber *usedReveal;
@property (readonly, nonatomic) long long playDuration;
@property (readonly, nonatomic) NSDate *lastPlayedDate;
@property (readonly, nonatomic) NSDate *completedDate;
@property (readonly, nonatomic) NSDate *firstCompletedDate;
@property (readonly, nonatomic) NSNumber *firstPlayDuration;
@property (readonly, nonatomic) NSNumber *bestScore;
@property (readonly, copy, nonatomic) NSString *progressMovesDescription;
@property (readonly, nonatomic) NSNumber *difficulty;
@property (readonly, nonatomic) NSDate *publishDate;
@property (readonly, nonatomic) NSNumber *behaviorFlags;
@property (readonly, nonatomic) CKRecord *asCKRecord;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0 puzzleID:(id)a1 puzzleTypeID:(id)a2 progressData:(id)a3 progressLevel:(long long)a4 score:(id)a5 scoreType:(id)a6 rankID:(id)a7 usedReveal:(id)a8 playDuration:(long long)a9 lastPlayedDate:(id)a10 completedDate:(id)a11 firstCompletedDate:(id)a12 firstPlayDuration:(id)a13 bestScore:(id)a14 progressMovesDescription:(id)a15 difficulty:(id)a16 publishDate:(id)a17 behaviorFlags:(id)a18;

@end

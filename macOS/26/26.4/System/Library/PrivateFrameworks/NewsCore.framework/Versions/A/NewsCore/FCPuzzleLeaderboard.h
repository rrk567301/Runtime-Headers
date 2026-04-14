@class NSString, NSNumber;

@interface FCPuzzleLeaderboard : NSObject

@property (copy, nonatomic) NSString *leaderboardID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *difficulty;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end

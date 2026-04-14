@class NSArray, NSMutableArray;

@interface TVPBoundaryTimeObserverInfo : NSObject

@property (copy, nonatomic) NSArray *times;
@property (copy, nonatomic) NSArray *segmentRelativeTimes;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL isForPrimaryPlayer;
@property (retain, nonatomic) id tokenFromAVPlayer;
@property (retain, nonatomic) NSMutableArray *tokensFromIntegratedTimeline;

- (void).cxx_destruct;
- (id)init;
- (id)description;

@end

@class NSArray, NSMutableArray;

@interface TVPBoundaryTimeObserverInfo : NSObject

@property (copy, nonatomic) NSArray *times;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) id tokenFromAVPlayer;
@property (retain, nonatomic) NSMutableArray *tokensFromIntegratedTimeline;

- (void).cxx_destruct;
- (id)init;

@end

@class NSNumber, NSMutableArray;

@interface ExclaveLayout : NSObject

@property (retain, nonatomic) NSNumber *layoutId;
@property (retain, nonatomic) NSNumber *sharedCacheIndex;
@property (retain, nonatomic) NSMutableArray *segments;

- (id)init;
- (void).cxx_destruct;

@end

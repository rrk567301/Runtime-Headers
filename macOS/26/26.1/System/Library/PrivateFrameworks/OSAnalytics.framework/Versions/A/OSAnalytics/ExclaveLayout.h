@class NSNumber, NSMutableArray;

@interface ExclaveLayout : NSObject

@property (retain, nonatomic) NSNumber *layoutId;
@property (retain, nonatomic) NSNumber *sharedCacheIndex;
@property (retain, nonatomic) NSMutableArray *segments;

- (void).cxx_destruct;
- (id)init;

@end

@class NSNumber;

@interface WAPCStoreSize : NSObject

@property BOOL storeNeedsPruning;
@property (retain) NSNumber *currentSize;
@property unsigned long long limit;
@property BOOL noError;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMaxStoreSize:(unsigned long long)a0;

@end

@class NSNumber;

@interface WAPCStoreSize : NSObject

@property BOOL storeNeedsPruning;
@property (retain) NSNumber *currentSize;
@property unsigned long long limit;
@property BOOL noError;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMaxStoreSize:(unsigned long long)a0;

@end

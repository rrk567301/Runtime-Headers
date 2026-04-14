@class NSString, NSNumber, NSMutableData;

@interface DESChunk : NSObject

@property (readonly, nonatomic) NSString *key;
@property (retain, nonatomic) NSNumber *clippingBound;
@property (readonly, nonatomic) NSMutableData *data;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithKey:(id)a0 clippingBound:(id)a1 data:(id)a2;

@end

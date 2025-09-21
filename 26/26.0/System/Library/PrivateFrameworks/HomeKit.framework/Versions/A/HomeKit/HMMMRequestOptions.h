@class NSNumber;

@interface HMMMRequestOptions : NSObject

@property (nonatomic) BOOL oneWay;
@property (readonly, nonatomic) NSNumber *timeout;
@property (readonly, nonatomic) long long transportRestriction;

- (id)attributeDescriptions;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTimeout:(id)a0 transportRestriction:(long long)a1;

@end

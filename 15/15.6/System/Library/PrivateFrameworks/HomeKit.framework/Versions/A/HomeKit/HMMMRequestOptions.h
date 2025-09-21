@class NSNumber;

@interface HMMMRequestOptions : NSObject

@property (nonatomic) char oneWay;
@property (readonly, nonatomic) NSNumber *timeout;
@property (readonly, nonatomic) long long transportRestriction;

- (id)init;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithTimeout:(id)a0 transportRestriction:(long long)a1;

@end

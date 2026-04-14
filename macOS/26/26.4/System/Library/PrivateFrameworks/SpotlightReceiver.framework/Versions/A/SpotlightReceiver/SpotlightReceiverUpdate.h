@class NSDictionary;
@protocol SpotlightReceiverInfo;

@interface SpotlightReceiverUpdate : NSObject

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) id<SpotlightReceiverInfo> info;
@property (readonly, nonatomic) NSDictionary *attributes;

- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 info:(id)a1 attributes:(id)a2;

@end

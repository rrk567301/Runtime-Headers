@interface MRAVOutputDeviceSourceInfo : NSObject

@property (readonly, nonatomic) char multipleBuiltInDevices;
@property (readonly, nonatomic) long long sourceType;

- (id)description;
- (char)isEqual:(id)a0;
- (id)initWithMultipleBuiltInDevices:(char)a0 sourceType:(long long)a1;

@end

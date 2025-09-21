@interface MRAVOutputDeviceSourceInfo : NSObject

@property (readonly, nonatomic) BOOL multipleBuiltInDevices;
@property (readonly, nonatomic) long long sourceType;

- (id)initWithMultipleBuiltInDevices:(BOOL)a0 sourceType:(long long)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

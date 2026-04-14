@class DDBridgeConstantContainer, DDBridgeBuiltin;

@interface DDBridgeNode : NSObject

@property (nonatomic, readonly) long long bridgeNodeType;
@property (nonatomic, readonly) DDBridgeBuiltin *builtin;
@property (nonatomic, readonly) DDBridgeConstantContainer *constant;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBridgeNodeType:(long long)a0 builtin:(id)a1 constant:(id)a2;

@end

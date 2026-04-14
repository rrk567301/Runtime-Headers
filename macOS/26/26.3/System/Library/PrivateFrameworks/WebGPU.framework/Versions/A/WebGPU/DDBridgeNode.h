@class DDBridgeConstantContainer, DDBridgeBuiltin;

@interface DDBridgeNode : NSObject

@property (nonatomic, readonly) int bridgeNodeType;
@property (nonatomic, readonly) DDBridgeBuiltin *builtin;
@property (nonatomic, readonly) DDBridgeConstantContainer *constant;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBridgeNodeType:(int)a0 builtin:(id)a1 constant:(id)a2;

@end

@class NSArray;

@interface CtrMeshDiagUnsupportedEnhancedDiagnosticsResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned char unsupportedNodeCount;
@property (readonly) NSArray *unsupportedNodes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUnsupportedNodeCount:(unsigned char)a0 unsupportedNodes:(id)a1;

@end

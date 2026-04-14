@class SBApplication;

@interface AMScriptingBridgeConversionAction : AMBundleAction

@property (retain, nonatomic) SBApplication *sbApplication;
@property (readonly, nonatomic) SBApplication *scriptingBridgeApplication;

- (void).cxx_destruct;
- (id)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)isTypeValidForObject:(id)a0;
- (id)sbObjectForDescriptor:(id)a0;
- (id)outputObjectArrayForInput:(id)a0;
- (id)descriptorForOutputObject:(id)a0;

@end

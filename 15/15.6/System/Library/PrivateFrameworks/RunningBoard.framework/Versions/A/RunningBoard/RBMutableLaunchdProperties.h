@interface RBMutableLaunchdProperties : RBLaunchdProperties

- (void)setPath:(id)a0;
- (void)setExecutablePath:(id)a0;
- (id)initWithProperties:(id)a0;
- (void)setHostPid:(int)a0;
- (void)setDoesOverrideManagement:(char)a0;
- (void)setIsAngel;
- (void)setIsDaemon;
- (void)setJobLabel:(id)a0;
- (void)setMultiInstance:(char)a0;
- (void)setOverrideManageFlags:(unsigned char)a0;
- (void)setSpecifiedIdentity:(id)a0;
- (void)setUnderlyingAssertion:(id)a0;
- (void)setVariableEUID:(char)a0;

@end

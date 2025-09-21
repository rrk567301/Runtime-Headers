@interface RBMutableLaunchdProperties : RBLaunchdProperties

- (void)setPath:(id)a0;
- (id)initWithProperties:(id)a0;
- (void)setHostPid:(int)a0;
- (void)setDoesOverrideManagement:(BOOL)a0;
- (void)setExecutablePath:(id)a0;
- (void)setUnderlyingAssertion:(id)a0;
- (void)setJobLabel:(id)a0;
- (void)setMultiInstance:(BOOL)a0;
- (void)setIsAngel;
- (void)setSpecifiedIdentity:(id)a0;
- (void)setIsDaemon;
- (void)setVariableEUID:(BOOL)a0;
- (void)setOverrideManageFlags:(unsigned char)a0;

@end

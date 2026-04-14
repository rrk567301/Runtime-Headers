@interface MCMContainerClassTransientPath : MCMContainerClassPath

+ (id)_temporaryComponent;
+ (id)_globalTemporaryComponent;
+ (id)transientGlobalURL;
+ (id)containerPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1;
+ (id)transientURLWithUserIdentity:(id)a0 withContainerClass:(unsigned long long)a1;
+ (id)transientGlobalBundleURL;

@end

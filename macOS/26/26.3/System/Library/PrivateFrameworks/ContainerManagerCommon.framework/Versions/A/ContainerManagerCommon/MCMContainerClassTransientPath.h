@interface MCMContainerClassTransientPath : MCMContainerClassPath

+ (id)_temporaryComponent;
+ (id)transientGlobalBundleURL;
+ (id)_globalTemporaryComponent;
+ (id)transientURLWithUserIdentity:(id)a0 withContainerClass:(unsigned long long)a1;
+ (id)transientGlobalURL;
+ (id)containerPathForUserIdentity:(id)a0 containerClass:(unsigned long long)a1;

@end

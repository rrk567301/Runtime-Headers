@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)identity;
- (id)createRBSTarget;
- (BOOL)isSystem;
- (id)description;
- (id)process;
- (id)environment;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

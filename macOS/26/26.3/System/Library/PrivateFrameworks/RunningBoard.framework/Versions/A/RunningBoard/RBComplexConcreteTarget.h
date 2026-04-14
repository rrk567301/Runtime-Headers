@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)identity;
- (id)description;
- (BOOL)isSystem;
- (id)environment;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)createRBSTarget;
- (unsigned long long)hash;
- (id)process;

@end

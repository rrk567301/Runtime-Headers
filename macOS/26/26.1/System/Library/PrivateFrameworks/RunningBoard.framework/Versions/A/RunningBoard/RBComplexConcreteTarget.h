@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)identity;
- (unsigned long long)hash;
- (id)environment;
- (id)createRBSTarget;
- (id)description;
- (id)process;
- (BOOL)isSystem;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

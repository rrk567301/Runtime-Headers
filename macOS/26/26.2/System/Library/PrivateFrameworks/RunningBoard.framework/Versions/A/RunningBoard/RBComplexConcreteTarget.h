@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)process;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isSystem;
- (id)createRBSTarget;
- (id)identity;
- (void).cxx_destruct;
- (id)description;
- (id)environment;

@end

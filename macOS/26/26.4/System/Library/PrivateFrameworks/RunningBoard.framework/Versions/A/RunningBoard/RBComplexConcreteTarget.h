@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)environment;
- (id)identity;
- (BOOL)isEqual:(id)a0;
- (id)process;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)createRBSTarget;
- (id)description;
- (BOOL)isSystem;

@end

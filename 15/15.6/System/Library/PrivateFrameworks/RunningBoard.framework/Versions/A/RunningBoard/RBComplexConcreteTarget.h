@class NSString, RBProcess, RBSProcessIdentity;

@interface RBComplexConcreteTarget : RBConcreteTarget {
    NSString *_description;
    RBProcess *_process;
    RBSProcessIdentity *_identity;
    NSString *_environment;
}

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)environment;
- (id)identity;
- (id)process;
- (char)isSystem;
- (id)createRBSTarget;

@end

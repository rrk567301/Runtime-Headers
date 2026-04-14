@class NSString;

@interface RBSAngelProcessIdentity : RBSProcessIdentity {
    NSString *_angelJobLabel;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)isAnonymous;
- (id)_initAngelWithJobLabel:(id)a0;
- (BOOL)isAngel;
- (id)angelJobLabel;

@end

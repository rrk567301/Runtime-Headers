@class NSString;

@interface RBSDaemonProcessIdentity : RBSProcessIdentity {
    NSString *_daemonJobLabel;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)isAnonymous;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (BOOL)isDaemon;
- (id)daemonJobLabel;

@end

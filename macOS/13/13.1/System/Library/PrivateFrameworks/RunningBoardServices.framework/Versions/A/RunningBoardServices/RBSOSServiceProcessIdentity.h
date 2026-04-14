@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isDaemon;
- (BOOL)isAngel;
- (id)daemonJobLabel;
- (BOOL)hasConsistentLaunchdJob;
- (id)consistentLaunchdJobLabel;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (unsigned char)osServiceType;
- (void)setOsServiceType:(unsigned char)a0;
- (id)angelJobLabel;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (id)_initAngelWithJobLabel:(id)a0;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;

@end

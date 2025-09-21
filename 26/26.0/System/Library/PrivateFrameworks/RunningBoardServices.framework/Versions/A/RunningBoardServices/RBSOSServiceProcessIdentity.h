@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (BOOL)isDaemon;
- (id)debugDescription;
- (id)_initAngelWithJobLabel:(id)a0;
- (id)angelJobLabel;
- (BOOL)isAnonymous;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (id)daemonJobLabel;
- (BOOL)hasConsistentLaunchdJob;
- (id)consistentLaunchdJobLabel;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (BOOL)isAngel;
- (unsigned char)osServiceType;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)supportsLaunchingDirectly;
- (id)encodeForJob;
- (BOOL)_matchesIdentity:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (void).cxx_destruct;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (void)setOsServiceType:(unsigned char)a0;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;

@end

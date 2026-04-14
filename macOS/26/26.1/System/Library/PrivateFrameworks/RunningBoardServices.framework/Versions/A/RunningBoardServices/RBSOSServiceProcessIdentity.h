@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (BOOL)isDaemon;
- (BOOL)hasConsistentLaunchdJob;
- (id)angelJobLabel;
- (BOOL)isAngel;
- (id)copyWithAuid:(unsigned int)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)daemonJobLabel;
- (BOOL)supportsLaunchingDirectly;
- (BOOL)isAnonymous;
- (id)_initAngelWithJobLabel:(id)a0;
- (void)setOsServiceType:(unsigned char)a0;
- (unsigned char)osServiceType;
- (id)consistentLaunchdJobLabel;
- (void).cxx_destruct;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (id)encodeForJob;
- (id)debugDescription;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (BOOL)_matchesIdentity:(id)a0;

@end

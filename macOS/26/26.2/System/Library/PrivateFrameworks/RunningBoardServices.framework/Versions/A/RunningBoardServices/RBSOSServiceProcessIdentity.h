@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (BOOL)isDaemon;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (unsigned char)osServiceType;
- (id)daemonJobLabel;
- (BOOL)supportsLaunchingDirectly;
- (id)debugDescription;
- (id)consistentLaunchdJobLabel;
- (BOOL)isAngel;
- (id)initWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)encodeForJob;
- (BOOL)_matchesIdentity:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (id)_initAngelWithJobLabel:(id)a0;
- (id)copyWithAuid:(unsigned int)a0;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (id)angelJobLabel;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (BOOL)hasConsistentLaunchdJob;
- (void)setOsServiceType:(unsigned char)a0;

@end

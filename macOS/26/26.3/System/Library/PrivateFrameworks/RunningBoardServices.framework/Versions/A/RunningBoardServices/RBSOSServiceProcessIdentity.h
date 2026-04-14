@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (BOOL)isDaemon;
- (BOOL)isAngel;
- (id)encodeForJob;
- (id)debugDescription;
- (id)copyWithAuid:(unsigned int)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isAnonymous;
- (BOOL)hasConsistentLaunchdJob;
- (void)setOsServiceType:(unsigned char)a0;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)daemonJobLabel;
- (id)angelJobLabel;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)consistentLaunchdJobLabel;
- (id)_initAngelWithJobLabel:(id)a0;
- (unsigned char)osServiceType;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (BOOL)_matchesIdentity:(id)a0;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (BOOL)supportsLaunchingDirectly;

@end

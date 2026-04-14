@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (BOOL)isDaemon;
- (id)copyWithAuid:(unsigned int)a0;
- (id)debugDescription;
- (id)angelJobLabel;
- (id)encodeForJob;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (void)setOsServiceType:(unsigned char)a0;
- (BOOL)treatedAsAnAppByFrontBoard:(id *)a0;
- (unsigned char)osServiceType;
- (id)initWithRBSXPCCoder:(id)a0;
- (id)daemonJobLabel;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAngel;
- (BOOL)_matchesIdentity:(id)a0;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)_initAngelWithJobLabel:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (BOOL)supportsLaunchingDirectly;
- (id)consistentLaunchdJobLabel;
- (BOOL)hasConsistentLaunchdJob;
- (BOOL)isAnonymous;

@end

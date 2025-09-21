@class NSString;

@interface RBSOSServiceProcessIdentity : RBSProcessIdentity {
    NSString *_jobLabel;
    unsigned char _type;
}

- (id)debugDescription;
- (void).cxx_destruct;
- (char)hasConsistentLaunchdJob;
- (char)isAngel;
- (id)_initAngelWithJobLabel:(id)a0;
- (id)_initDaemonWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2;
- (id)_initServiceWithJobLabel:(id)a0 pid:(int)a1 auid:(unsigned int)a2 type:(unsigned char)a3;
- (id)_initUnknownOSServiceWithJobLabel:(id)a0;
- (char)_matchesIdentity:(id)a0;
- (id)angelJobLabel;
- (id)consistentLaunchdJobLabel;
- (id)copyWithAuid:(unsigned int)a0;
- (id)daemonJobLabel;
- (id)encodeForJob;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithDecodeFromJob:(id)a0 uuid:(id)a1;
- (id)initWithRBSXPCCoder:(id)a0;
- (char)isAnonymous;
- (char)isDaemon;
- (unsigned char)osServiceType;
- (void)setOsServiceType:(unsigned char)a0;
- (char)supportsLaunchingDirectly;
- (char)treatedAsAnAppByFrontBoard:(id *)a0;

@end

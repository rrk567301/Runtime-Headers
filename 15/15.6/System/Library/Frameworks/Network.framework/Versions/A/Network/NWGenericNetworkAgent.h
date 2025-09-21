@class NSString, NSUUID;

@interface NWGenericNetworkAgent : NSObject <NWPrettyDescription>

@property struct netagent { unsigned char x0[16]; char x1[32]; char x2[32]; char x3[128]; unsigned int x4; unsigned int x5; unsigned char x6[0]; } *internalNetagent;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NSString *agentDomain;
@property (readonly, nonatomic) NSString *agentType;
@property (readonly, nonatomic) NSString *agentDescription;
@property (readonly, nonatomic) NSUUID *agentUUID;
@property (readonly, nonatomic, getter=isActive) char active;
@property (readonly, nonatomic, getter=isKernelActivated) char kernelActivated;
@property (readonly, nonatomic, getter=isUserActivated) char userActivated;
@property (readonly, nonatomic, getter=isVoluntary) char voluntary;
@property (readonly, nonatomic, getter=isSpecificUseOnly) char specificUseOnly;
@property (readonly, nonatomic, getter=isNetworkProvider) char networkProvider;

- (void)dealloc;
- (id)description;
- (char)isNexusProvider;
- (char)supportsResolve;
- (id)descriptionWithIndent:(int)a0 showFullContent:(char)a1;
- (id)initWithKernelAgent:(const struct netagent { unsigned char x0[16]; char x1[32]; char x2[32]; char x3[128]; unsigned int x4; unsigned int x5; unsigned char x6[0]; } *)a0;
- (char)requiresAssert;
- (char)supportsBrowse;
- (char)supportsGroups;

@end

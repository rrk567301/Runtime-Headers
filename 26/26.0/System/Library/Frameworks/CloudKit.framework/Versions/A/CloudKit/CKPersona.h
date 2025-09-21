@class NSString;

@interface CKPersona : NSObject <CKPropertiesDescription, NSCopying, NSSecureCoding>

@property (class, readonly, getter=isSupported) BOOL supported;
@property (class, readonly) BOOL canUseArbitraryPersonas;
@property (class, readonly, copy) CKPersona *launchPersona;
@property (class, readonly, copy) CKPersona *currentPersona;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=isLaunchPersona) BOOL launchPersona;
@property (readonly, getter=isCurrentPersona) BOOL currentPersona;
@property (readonly, getter=isDataSeparated) long long dataSeparated;
@property (readonly) BOOL canAdopt;
@property (readonly, copy) NSString *identifier;
@property (readonly) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setProcessInfo:(id)a0;
+ (id)processInfo;
+ (void)setUserManager:(id)a0;
+ (BOOL)getOriginatorPersona:(id *)a0 error:(id *)a1;
+ (BOOL)getProximatePersona:(id *)a0 error:(id *)a1;
+ (id)personaFromPersonaInfo:(struct proc_persona_info { unsigned long long x0; int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned char x7[16]; })a0 error:(id *)a1;
+ (id)personaFromUserPersona:(id)a0;
+ (id)personaFromUserPersonaAttributes:(id)a0;
+ (id)personaWithIdentifier:(id)a0 error:(id *)a1;
+ (id)personaWithIdentifier:(id)a0 type:(unsigned long long)a1;
+ (id)personas:(id *)a0;
+ (id)personasWithType:(unsigned long long)a0 error:(id *)a1;
+ (id)userManager;

- (id)CKShortDescriptionRedact:(BOOL)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)adopt:(id *)a0;
- (BOOL)isEquivalentToPersona:(id)a0;
- (void)restore:(id)a0;

@end

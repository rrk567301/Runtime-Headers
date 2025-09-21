@class NSString, NSArray, NSDictionary;

@interface SUCoreSimulateEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int count;
@property (readonly, nonatomic) long long simAction;
@property (readonly, nonatomic) long long simTrigger;
@property (readonly, retain, nonatomic) NSString *moduleName;
@property (readonly, retain, nonatomic) NSString *identityName;
@property (readonly, retain, nonatomic) NSString *fsmEvent;
@property (readonly, retain, nonatomic) NSString *fsmState;
@property (readonly, retain, nonatomic) NSString *alteration;
@property (readonly, nonatomic) int startAt;
@property (readonly, nonatomic) int endAt;
@property (readonly, nonatomic) int duration;
@property (readonly, retain, nonatomic) NSString *untilStop;
@property (readonly, retain, nonatomic) NSArray *assetBuildVersions;
@property (readonly, retain, nonatomic) NSArray *assetProductVersions;
@property (readonly, retain, nonatomic) NSString *assetAttributesPlist;
@property (readonly, retain, nonatomic) NSString *assetState;
@property (readonly, retain, nonatomic) NSString *updateInfoPlist;
@property (readonly, retain, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, retain, nonatomic) NSDictionary *errorUserInfo;
@property (readonly, nonatomic) long long errorRecoverable;

+ (id)nameForSimulateEventBoolean:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)_descriptionFSM;
- (id)_actionName;
- (id)_descriptionStandard;
- (id)_initWithAction:(long long)a0 onTrigger:(long long)a1 forModule:(id)a2 atIdentity:(id)a3 atEvent:(id)a4 inState:(id)a5 alteration:(id)a6 startAt:(int)a7 endAt:(int)a8 duration:(int)a9 untilStop:(id)a10 assetBuildVersions:(id)a11 assetProductVersions:(id)a12 assetAttributesPlist:(id)a13 assetState:(id)a14 updateInfoPlist:(id)a15 errorDomain:(id)a16 errorCode:(long long)a17 errorUserInfo:(id)a18 errorRecoverable:(long long)a19;
- (id)_triggerName;
- (id)buildErrorWithDescription:(id)a0;
- (id)initWithAction:(long long)a0 onTrigger:(long long)a1 forMachine:(id)a2 atEvent:(id)a3 inState:(id)a4 alteration:(id)a5 startAt:(int)a6 endAt:(int)a7 assetBuildVersions:(id)a8 assetProductVersions:(id)a9 assetAttributesPlist:(id)a10 assetState:(id)a11 updateInfoPlist:(id)a12 errorDomain:(id)a13 errorCode:(long long)a14 errorUserInfo:(id)a15 errorRecoverable:(long long)a16;
- (id)initWithAction:(long long)a0 onTrigger:(long long)a1 forModule:(id)a2 atFunction:(id)a3 startAt:(int)a4 endAt:(int)a5 duration:(int)a6 untilStop:(id)a7 assetBuildVersions:(id)a8 assetProductVersions:(id)a9 assetAttributesPlist:(id)a10 assetState:(id)a11 updateInfoPlist:(id)a12 errorDomain:(id)a13 errorCode:(long long)a14 errorUserInfo:(id)a15 errorRecoverable:(long long)a16;

@end

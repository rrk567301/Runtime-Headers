@class NSString;

@interface UMUserMutablePersona : UMUserPersona

@property (nonatomic) unsigned int uid;
@property (nonatomic) unsigned int gid;
@property (nonatomic) char isEnterprisePersona;
@property (nonatomic) char isPersonalPersona;
@property (nonatomic) char isSystemPersona;
@property (nonatomic) char isDefaultPersona;
@property (nonatomic) char isGuestPersona;
@property (nonatomic) char isDataSeparatedPersona;
@property (nonatomic) char isDisabled;
@property (copy, nonatomic) NSString *userPersonaUniqueString;
@property (copy, nonatomic) NSString *userPersonaNickName;
@property (nonatomic) unsigned long long userPersonaType;

- (char)commitChanges;
- (char)commitChangesWithError:(id *)a0;

@end

@class NSString;

@interface UMUserPersona : NSObject <NSCopying, NSMutableCopying> {
    NSString *personaName;
    char shouldFetchAttributes;
}

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

+ (id)currentPersona;
+ (char)currentPersonaMatchesPath:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyCurrentPersonaContextWithError:(id *)a0;
- (id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)a0;
- (id)restorePersonaWithSavedPersonaContext:(id)a0;
- (id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)a0;
- (char)commitChanges;
- (char)commitChangesWithError:(id *)a0;
- (id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)a0;
- (id)generateAndRestorePersonaContextWithIdentityString:(id)a0;
- (char)isEqualToPersona:(id)a0;

@end

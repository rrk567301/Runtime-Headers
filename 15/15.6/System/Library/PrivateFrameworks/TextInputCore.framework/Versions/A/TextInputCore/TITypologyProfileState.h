@class NSData, NSString, NSDate;

@interface TITypologyProfileState : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *salt;
@property (copy, nonatomic) NSDate *profileInstallationDate;
@property (copy, nonatomic) NSDate *userNotificationDate;
@property (copy, nonatomic) NSString *userResponse;

+ (char)removePersistedState;
+ (char)_removePersistedStateAtURL:(id)a0;
+ (id)_typologyProfileStateFromURL:(id)a0;
+ (id)defaultPersistentURL;
+ (char)removePersistedStateAtURL:(id)a0;
+ (id)typologyProfileStateFromPersistedState;
+ (id)typologyProfileStateWithURL:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hashForString:(id)a0;
- (char)persistState;
- (char)_authenticateHashToken:(id)a0 forProfileInstallationDate:(id)a1 userNotificationDate:(id)a2 userResponse:(id)a3;
- (id)_hashTokenForProfileInstallationDate:(id)a0 userNotificationDate:(id)a1 userResponse:(id)a2;
- (char)_persistStateToURL:(id)a0;
- (id)initWithProfileInstallationDate:(id)a0;
- (id)initWithProfileInstallationDate:(id)a0 userNotificationDate:(id)a1 userResponse:(id)a2;
- (char)persistStateToURL:(id)a0;

@end

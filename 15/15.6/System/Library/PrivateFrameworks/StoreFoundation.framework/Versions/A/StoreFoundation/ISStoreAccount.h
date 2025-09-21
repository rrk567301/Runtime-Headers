@class NSString, NSTimer, NSDate, NSNumber;

@interface ISStoreAccount : NSObject <NSSecureCoding> {
    NSTimer *_tokenInvalidTimer;
}

@property (class, readonly) char supportsSecureCoding;

@property long long touchIDState;
@property (copy) NSNumber *dsID;
@property (copy) NSString *identifier;
@property long long kind;
@property (copy) NSString *creditString;
@property (retain) NSString *storeFront;
@property char isSignedIn;
@property char isManagedStudent;
@property (copy) NSString *password;
@property (copy) NSString *token;
@property (readonly, getter=isAuthenticated) char authenticated;
@property long long URLBagType;
@property (retain) NSDate *tokenIssuedDate;
@property (retain) NSTimer *tokenExpirationTimer;
@property (readonly, getter=isPrimary) char primary;

+ (id)dsidFromPlistValue:(id)a0;
+ (id)migratePersistedStoreDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)getTouchIDState;
- (char)hasValidStrongToken;
- (id)initWithPersistedStoreDictionary:(id)a0;
- (void)mergeValuesFromAuthenticationResponse:(id)a0;
- (id)persistedStoreDictionary;
- (void)resetTouchIDState;
- (double)strongTokenValidForSecond;

@end

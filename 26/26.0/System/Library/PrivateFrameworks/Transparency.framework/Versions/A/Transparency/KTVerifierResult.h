@class NSString, NSArray, KTAccountPublicID, NSDate, NSError, NSDictionary;

@interface KTVerifierResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *uri;
@property (retain) NSString *application;
@property unsigned long long succeed;
@property BOOL optedIn;
@property BOOL everOptedIn;
@property BOOL recentlyOptedIn;
@property BOOL staticAccountKeyEnforced;
@property unsigned long long staticAccountKeyStatus;
@property (retain) KTAccountPublicID *publicID;
@property (retain) NSDate *validUntil;
@property (retain) NSArray *loggableDatas;
@property (retain) NSError *failure;
@property unsigned long long uiStatus;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initPendingForUri:(id)a0 application:(id)a1;
- (id)initUnavailableForUri:(id)a0 application:(id)a1;
- (id)initWithUri:(id)a0 application:(id)a1;
- (id)initWithUri:(id)a0 application:(id)a1 failure:(id)a2;
- (id)initWithUri:(id)a0 application:(id)a1 ktResult:(unsigned long long)a2;
- (id)initWithUri:(id)a0 application:(id)a1 ktResult:(unsigned long long)a2 failure:(id)a3;
- (void)updateLoggableDataForFailure;
- (void)updateWithStaticKeyEnforced:(unsigned long long)a0 isFailureIgnoredForDate:(BOOL)a1;
- (void)updateWithStaticKeyEnforcedPeerEnforcement:(unsigned long long)a0;

@end

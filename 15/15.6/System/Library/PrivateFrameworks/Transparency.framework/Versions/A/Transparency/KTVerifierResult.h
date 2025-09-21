@class NSString, NSArray, KTAccountPublicID, NSError, NSDictionary;

@interface KTVerifierResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSString *uri;
@property (retain) NSString *application;
@property unsigned long long succeed;
@property char optedIn;
@property char everOptedIn;
@property char recentlyOptedIn;
@property char staticAccountKeyEnforced;
@property unsigned long long staticAccountKeyStatus;
@property (retain) KTAccountPublicID *publicID;
@property (retain) NSArray *loggableDatas;
@property (retain) NSError *failure;
@property unsigned long long uiStatus;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initPendingForUri:(id)a0 application:(id)a1;
- (id)initUnavailableForUri:(id)a0 application:(id)a1;
- (id)initWithUri:(id)a0 application:(id)a1;
- (id)initWithUri:(id)a0 application:(id)a1 failure:(id)a2;
- (id)initWithUri:(id)a0 application:(id)a1 ktResult:(unsigned long long)a2;
- (id)initWithUri:(id)a0 application:(id)a1 ktResult:(unsigned long long)a2 failure:(id)a3;
- (void)updateWithStaticKeyEnforced:(unsigned long long)a0 isFailureIgnoredForDate:(char)a1;

@end

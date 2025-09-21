@interface IDSIDInfoOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char allowRefresh;
@property (nonatomic) char respectExpiry;
@property (nonatomic) char waitForReply;
@property (nonatomic) char forceRefresh;
@property (nonatomic) char bypassLimit;

+ (id)currentIDInfo;
+ (id)refreshIDInfo;
+ (id)refreshIDInfoAndBypassLimit;
+ (id)sync_currentIDInfo;
+ (id)sync_refreshIDInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBypassLimit:(char)a0 allowRefresh:(char)a1 forceRefresh:(char)a2 respectExpiry:(char)a3 waitForReply:(char)a4;

@end

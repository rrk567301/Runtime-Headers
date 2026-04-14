@class CKServerChangeToken, NSString, NSDate;

@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *lastSyncDownDate;
@property (nonatomic) long long lastSyncDownStatus;
@property (retain, nonatomic) CKServerChangeToken *changeToken;
@property (nonatomic) unsigned long long clientRequestID;
@property (retain, nonatomic) NSDate *lastResetDate;
@property (retain, nonatomic) NSString *lastResetReason;
@property (readonly, nonatomic) BOOL hasNeverSyncedDown;

- (void)forgetClientRequestID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateWithServerChangeToken:(id)a0 clientRequestID:(unsigned long long)a1 caughtUp:(BOOL)a2;
- (id)initWithServerSyncState:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)forgetChangeTokens;

@end

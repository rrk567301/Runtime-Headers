@class CKServerChangeToken, NSDate;

@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *lastSyncDownDate;
@property (nonatomic) long long lastSyncDownStatus;
@property (retain, nonatomic) CKServerChangeToken *changeToken;
@property (nonatomic) unsigned long long clientRequestID;
@property (readonly, nonatomic) BOOL hasNeverSyncedDown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (void)forgetClientRequestID;
- (id)description;
- (void)updateWithServerChangeToken:(id)a0 clientRequestID:(unsigned long long)a1 caughtUp:(BOOL)a2;
- (void)forgetChangeTokens;
- (id)initWithServerSyncState:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

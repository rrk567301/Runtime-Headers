@class CKServerChangeToken, NSDate;

@interface BRCServerChangeState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSDate *lastSyncDownDate;
@property (nonatomic) long long lastSyncDownStatus;
@property (retain, nonatomic) CKServerChangeToken *changeToken;
@property (nonatomic) unsigned long long clientRequestID;
@property (readonly, nonatomic) char hasNeverSyncedDown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (void)forgetChangeTokens;
- (void)forgetClientRequestID;
- (id)initWithServerSyncState:(id)a0;
- (void)updateWithServerChangeToken:(id)a0 clientRequestID:(unsigned long long)a1 caughtUp:(char)a2;

@end

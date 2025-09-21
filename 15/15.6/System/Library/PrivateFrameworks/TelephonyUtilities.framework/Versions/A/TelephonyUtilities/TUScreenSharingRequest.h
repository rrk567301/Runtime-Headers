@class NSUUID, TUHandle;

@interface TUScreenSharingRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, nonatomic) unsigned long long participantIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) char isLocallyOriginated;
@property (readonly, nonatomic) long long originType;
@property (readonly, nonatomic) char shouldSendLegacyInvite;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToRequest:(id)a0;
- (id)initWithHandle:(id)a0 shareMyScreen:(char)a1 originType:(long long)a2 shouldSendLegacyInvite:(char)a3;
- (id)initWithHandle:(id)a0 type:(long long)a1 originType:(long long)a2 UUID:(id)a3 participantIdentifier:(unsigned long long)a4;
- (id)initWithHandle:(id)a0 type:(long long)a1 originType:(long long)a2 UUID:(id)a3 participantIdentifier:(unsigned long long)a4 shouldSendLegacyInvite:(char)a5;

@end

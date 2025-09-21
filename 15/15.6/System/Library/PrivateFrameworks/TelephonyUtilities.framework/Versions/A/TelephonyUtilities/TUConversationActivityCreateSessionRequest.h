@class TUConversationActivityMetadata, NSUUID, NSString, NSData, CKShare;

@interface TUConversationActivityCreateSessionRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *activityIdentifier;
@property (copy, nonatomic) NSData *applicationContext;
@property (retain, nonatomic) TUConversationActivityMetadata *metadata;
@property (copy, nonatomic) CKShare *share;
@property (copy, nonatomic) NSString *staticIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMetadata:(id)a0 applicationContext:(id)a1 activityIdentifier:(id)a2 uuid:(id)a3;
- (id)initWithMetadata:(id)a0 applicationContext:(id)a1 activityIdentifier:(id)a2 uuid:(id)a3 staticIdentifier:(id)a4;
- (char)isEqualToConversationActivitySessionCreationRequest:(id)a0;

@end

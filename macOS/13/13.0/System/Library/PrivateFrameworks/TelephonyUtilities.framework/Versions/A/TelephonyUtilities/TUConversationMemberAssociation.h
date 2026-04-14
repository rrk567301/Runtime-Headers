@class NSString, TUHandle;

@interface TUConversationMemberAssociation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) TUHandle *handle;
@property (nonatomic, getter=isPrimary) BOOL primary;
@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSString *avcIdentifier;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithMemberAssociation:(id)a0;
- (id)initWithHandle:(id)a0 type:(long long)a1 primary:(BOOL)a2;
- (BOOL)isEqualToAssociation:(id)a0;

@end

@class CNContactStore, CNContact, NSString, CKUserIdentity;

@interface CKShareBlockedIdentity : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly, copy, nonatomic) CKUserIdentity *userIdentity;
@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserIdentity:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithUserIdentity:(id)a0 contactStore:(id)a1;

@end

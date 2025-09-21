@class NSString, CNContact;

@interface _PSRecipient : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *senderHandle;
@property (copy, nonatomic) NSString *givenName;
@property (copy, nonatomic) NSString *familyName;
@property (nonatomic) char familyHeuristic;
@property (nonatomic) char photosInference;
@property (copy, nonatomic) NSString *mostRecentTransportBundleId;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *handle;
@property (copy, nonatomic) NSString *handleString;
@property long long handleType;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) CNContact *contact;

+ (id)recipientForINPerson:(id)a0 contactResolver:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)descriptionRedacted:(char)a0;
- (id)initWithIdentifier:(id)a0 handle:(id)a1 displayName:(id)a2 contact:(id)a3;
- (id)initWithIdentifier:(id)a0 handle:(id)a1 contact:(id)a2;
- (id)initWithIdentifier:(id)a0 handle:(id)a1 contact:(id)a2 mostRecentTransportBundleId:(id)a3;
- (id)initWithIdentifier:(id)a0 senderHandle:(id)a1 handle:(id)a2 displayName:(id)a3 contact:(id)a4;
- (id)initWithIdentifier:(id)a0 senderHandle:(id)a1 handle:(id)a2 displayName:(id)a3 contact:(id)a4 mostRecentTransportBundleId:(id)a5;

@end

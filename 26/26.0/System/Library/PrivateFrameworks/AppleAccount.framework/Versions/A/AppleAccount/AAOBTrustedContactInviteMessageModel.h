@class NSURL, NSString, AACustodianshipInfo;

@interface AAOBTrustedContactInviteMessageModel : NSObject <AAOBTrustedContactUpsellInviteMessageModelProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *messageURL;
@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailText;
@property (copy, nonatomic) NSString *primaryButton;
@property (copy, nonatomic) NSString *secondaryButton;
@property (copy, nonatomic) NSString *leftBarButton;
@property (copy, nonatomic) NSString *helpLinkTitle;
@property (copy, nonatomic) NSString *helpLinkURL;
@property (copy, nonatomic) NSString *ownerHandle;
@property (copy, nonatomic) NSString *recipientHandle;
@property (copy, nonatomic) AACustodianshipInfo *custodianshipInfo;
@property (copy, nonatomic) NSString *accessibilityIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecipientHandle:(id)a0;
- (id)initWithType:(unsigned long long)a0 recipientHandle:(id)a1;
- (id)initWithType:(unsigned long long)a0 recipientHandle:(id)a1 messageURL:(id)a2;

@end

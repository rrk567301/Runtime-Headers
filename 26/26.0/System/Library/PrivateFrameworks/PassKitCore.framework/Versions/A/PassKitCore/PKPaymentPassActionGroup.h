@class NSString, NSArray, NSDictionary, PKPaymentPassActionExternalActionContent, PKPaymentPassActionRemoteConfiguration;

@interface PKPaymentPassActionGroup : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *actionGroupDescription;
@property (copy, nonatomic) NSArray *actionIdentifiers;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSDictionary *appletData;
@property (readonly, nonatomic) PKPaymentPassActionExternalActionContent *externalActionContent;
@property (readonly, nonatomic) BOOL hasExternalActionContent;
@property (readonly, nonatomic) PKPaymentPassActionRemoteConfiguration *remoteContentConfiguration;
@property (readonly, nonatomic) BOOL hasRemoteContent;
@property (readonly, nonatomic) BOOL remoteContentRequiresAppletData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 localizations:(id)a1;

@end

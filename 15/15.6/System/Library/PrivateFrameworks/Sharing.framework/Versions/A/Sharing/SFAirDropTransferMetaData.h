@class NSSet, NSString, NSDictionary, NSArray;

@interface SFAirDropTransferMetaData : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long transferTypes;
@property (copy, nonatomic) NSSet *items;
@property (nonatomic) char didAutoAccept;
@property (readonly, nonatomic) char canAutoAccept;
@property (readonly, nonatomic, getter=isVerifiableIdentity) char verifiableIdentity;
@property (readonly, nonatomic) char senderIsMe;
@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSString *senderBundleID;
@property (readonly, copy, nonatomic) NSString *senderComputerName;
@property (readonly, copy, nonatomic) NSString *senderEmail;
@property (readonly, copy, nonatomic) NSString *senderEmailHash;
@property (readonly, copy, nonatomic) NSString *senderCompositeName;
@property (readonly, copy, nonatomic) NSString *senderFirstName;
@property (readonly, copy, nonatomic) NSString *senderLastName;
@property (readonly, copy, nonatomic) NSString *senderID;
@property (readonly, nonatomic) id senderIcon;
@property (readonly, nonatomic) id smallPreviewImage;
@property (readonly, nonatomic) id previewImage;
@property (readonly, copy, nonatomic) NSString *itemsDescription;
@property (readonly, copy, nonatomic) NSDictionary *itemsDescriptionAdvanced;
@property (readonly, copy, nonatomic) NSArray *rawFiles;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInformation:(id)a0;
- (id)initWithTransferTypes:(long long)a0 canAutoAccept:(char)a1 didAutoAccept:(char)a2 verifiableIdentity:(char)a3 senderIsMe:(char)a4 contactIdentifier:(id)a5 senderBundleID:(id)a6 senderComputerName:(id)a7 senderEmail:(id)a8 senderEmailHash:(id)a9 senderCompositeName:(id)a10 senderFirstName:(id)a11 senderLastName:(id)a12 senderID:(id)a13 senderIcon:(id)a14 smallPreviewImage:(id)a15 previewImage:(id)a16 itemsDescription:(id)a17 itemsDescriptionAdvanced:(id)a18 items:(id)a19 rawFiles:(id)a20;
- (void)setItemsDescription:(id)a0;
- (void)updateUsingCoder:(id)a0;

@end

@class NSString, NSDictionary, NSData, ICDocCamImageQuad;

@interface ICDocCamDocumentInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL constantColor;
@property (retain, nonatomic) NSDictionary *metaData;
@property (retain, nonatomic) ICDocCamImageQuad *imageQuad;
@property (retain, nonatomic) NSString *croppedAndFilteredImageUUID;
@property (retain, nonatomic) NSString *croppedButNotFilteredImageUUID;
@property (retain, nonatomic) NSString *fullImageUUID;
@property (retain, nonatomic) NSString *meshAnimImageUUID;
@property (nonatomic) short currentFilter;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) NSString *scanDataDelegateIdentifier;
@property (readonly, nonatomic) BOOL hasFilter;
@property (retain, nonatomic) NSData *markupModelData;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)allUUIDs;

@end

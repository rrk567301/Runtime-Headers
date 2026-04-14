@class NSData, NSString, NSDictionary, CKRecordID, WFFileRepresentation, WFImage, NSArray;

@interface WFGalleryBanner : NSObject <WFCloudKitItem>

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } pointSize;
@property (class, readonly, nonatomic) NSString *imageProperty;
@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) CKRecordID *detailPage;
@property (retain, nonatomic) WFFileRepresentation *imageFile;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) NSArray *supportedIdioms;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 subtitle:(id)a2 detailPage:(id)a3 imageFile:(id)a4 language:(id)a5 base:(id)a6 persistentIdentifier:(id)a7 supportedIdioms:(id)a8;
- (unsigned long long)referenceActionForKey:(id)a0;

@end

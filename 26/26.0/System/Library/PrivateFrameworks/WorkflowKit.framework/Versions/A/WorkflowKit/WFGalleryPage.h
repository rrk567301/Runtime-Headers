@class NSString, NSDictionary, NSArray, CKRecordID, NSNumber, NSData;

@interface WFGalleryPage : NSObject <WFCloudKitItem>

@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *minVersion;
@property (readonly, nonatomic) NSNumber *isRoot;
@property (copy, nonatomic) NSArray *banners;
@property (copy, nonatomic) NSArray *collections;
@property (copy, nonatomic) NSArray *donationsGroupedByApp;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 minVersion:(id)a2 isRoot:(id)a3 banners:(id)a4 collections:(id)a5 language:(id)a6 base:(id)a7 persistentIdentifier:(id)a8;
- (unsigned long long)referenceActionForKey:(id)a0;
- (id)subPageMatchingName:(id)a0;
- (id)subPageWithIdentifier:(id)a0;

@end

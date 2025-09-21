@class NSString, NSDictionary, NSArray, NSDate, CKRecordID, NSData;

@interface WFGalleryCollection : NSObject <WFCloudKitItem, WFSortableGalleryObject>

@property (class, readonly, nonatomic) NSString *recordType;
@property (class, readonly, nonatomic) NSDictionary *properties;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *collectionDescription;
@property (copy, nonatomic) NSArray *workflows;
@property (readonly, nonatomic) long long minVersion;
@property (copy, nonatomic) NSArray *supportedIdioms;
@property (readonly, nonatomic) NSDate *modifiedAt;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) CKRecordID *base;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 collectionDescription:(id)a2 workflows:(id)a3 minVersion:(long long)a4 supportedIdioms:(id)a5 modifiedAt:(id)a6 language:(id)a7 base:(id)a8 persistentIdentifier:(id)a9;
- (unsigned long long)referenceActionForKey:(id)a0;
- (void)setCreatedAt:(id)a0 modifiedAt:(id)a1 createdBy:(id)a2;

@end

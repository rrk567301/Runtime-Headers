@class NSArray, PKPassUpcomingPassInformationEntryContentEvent, PKPassUpcomingPassInformationImageManifest;

@interface PKPassUpcomingPassInformationEntryContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassUpcomingPassInformationEntryContentEvent *eventContent;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSArray *additionalInfoFields;
@property (readonly, copy, nonatomic) NSArray *backFields;
@property (readonly, copy, nonatomic) NSArray *auxiliaryStoreIdentifiers;
@property (readonly, nonatomic) PKPassUpcomingPassInformationImageManifest *headerManifest;

+ (id)_createContentForType:(unsigned long long)a0;
+ (unsigned long long)_entryContentTypeForEntryType:(unsigned long long)a0 fromDictionary:(id)a1 bundle:(id)a2;
+ (id)createFromDictionary:(id)a0 bundle:(id)a1 withEntryType:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_initWithType:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToContent:(id)a0;
- (BOOL)populateFromDictionary:(id)a0 bundle:(id)a1;

@end

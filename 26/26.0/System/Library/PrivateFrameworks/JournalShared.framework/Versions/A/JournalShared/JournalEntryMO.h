@class NSUUID, NSString, NSData, NSDate, NSSet, WrappedMergeableEntryAttributes;

@interface JournalEntryMO : NSManagedObject

@property (nonatomic, copy) NSData *assetOrdering;
@property (nonatomic, copy) NSDate *bundleDate;
@property (nonatomic, copy) NSDate *bundleEndDate;
@property (nonatomic, copy) NSUUID *bundleId;
@property (nonatomic, copy) NSDate *createdDate;
@property (nonatomic, copy) NSString *dateSource;
@property (nonatomic, copy) NSDate *deletedOnDate;
@property (nonatomic, copy) NSDate *entryDataUpdateDate;
@property (nonatomic, copy) NSDate *entryDate;
@property (nonatomic, copy) NSString *entryType;
@property (nonatomic) BOOL flagged;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) BOOL isDraft;
@property (nonatomic) BOOL isFullyRemoved;
@property (nonatomic) BOOL isRemovedFromCloud;
@property (nonatomic) BOOL isTip;
@property (nonatomic) BOOL isUploadedToCloud;
@property (nonatomic, retain) WrappedMergeableEntryAttributes *mergeableAttributes;
@property (nonatomic) short minimumSupportedAppVersion;
@property (nonatomic) short minimumSupportedAppVersionMode;
@property (nonatomic, copy) NSDate *momentDateForSorting;
@property (nonatomic, copy) NSData *prompt;
@property (nonatomic) BOOL recentlyDeleted;
@property (nonatomic, copy) NSDate *recentlyDeletedEntryDate;
@property (nonatomic, copy) NSData *recordSystemFields;
@property (nonatomic, copy) NSData *reflectionIcon;
@property (nonatomic, copy) NSData *reflectionPrompt;
@property (nonatomic, copy) NSString *reflectionType;
@property (nonatomic) BOOL showPhotoMemoryBanner;
@property (nonatomic) BOOL showTitle;
@property (nonatomic, copy) NSData *text;
@property (nonatomic) short textLength;
@property (nonatomic, copy) NSData *title;
@property (nonatomic, copy) NSDate *updatedDate;
@property (nonatomic, retain) NSSet *assets;
@property (nonatomic, retain) NSSet *journals;

- (void)willSave;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void)prepareForDeletion;

@end

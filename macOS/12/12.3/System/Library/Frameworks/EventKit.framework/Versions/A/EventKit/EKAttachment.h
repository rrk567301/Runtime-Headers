@class NSString, NSDictionary, NSURL, NSNumber, NSManagedObjectID;

@interface EKAttachment : EKObject <EKProtocolAttachment>

@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSURL *URLForPendingFileCopy;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *fileFormat;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (retain) NSString *contentTypeFromServer;
@property (retain) NSString *attachmentIDOnServer;
@property (readonly, retain) NSString *contentType;
@property (readonly, retain) NSURL *urlOnDisk;
@property (readonly, retain) NSString *filenameSuggestedByServer;
@property (readonly, retain) NSURL *urlOnServer;
@property (readonly, retain) NSNumber *isAutoArchivedNumber;
@property (readonly, retain) NSString *uuid;
@property (readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property (readonly, nonatomic) BOOL isPartialObject;
@property (readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property (readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)frozenClass;
+ (id)knownImmutableKeys;
+ (id)uniqueIdentifierForObject:(id)a0;
+ (id)knownIdentityKeys;
+ (id)knownSingleValueKeys;
+ (id)filePathOnServerForAttachment:(id)a0 onEvent:(id)a1;
+ (id)attachmentWithAttachment:(id)a0;
+ (id)filePathForAttachment:(id)a0 event:(id)a1;
+ (id)createTempDestinationURLWithExtension:(id)a0;

- (void).cxx_destruct;
- (id)filename;
- (void)download;
- (BOOL)isCached;
- (id)initWithObject:(id)a0 createPartialBackingObject:(BOOL)a1 keepBackingObject:(BOOL)a2 preFrozenRelationshipObjects:(id)a3 additionalFrozenProperties:(id)a4;
- (void)_updateUrlOnDisk:(id)a0;
- (void)_updateUrlOnServer:(id)a0;
- (id)initWithAttachment:(id)a0;
- (void)setUrlOnServer:(id)a0;
- (void)setUrlOnDisk:(id)a0;
- (id)_fileIsAutoArchivedNumber:(id)a0;
- (id)backingAttachment;
- (id)initWithFilepath:(id)a0;
- (BOOL)_fileIsAutoZipped:(id)a0;
- (id)localURLForSource:(id)a0;

@end

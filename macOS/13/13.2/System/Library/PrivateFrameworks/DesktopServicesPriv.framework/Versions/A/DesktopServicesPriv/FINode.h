@class FPItem, NSString, NSURL, NSDate, BRContainer, UTType, FPProviderDomain, NSArray, NSError, NSPersonNameComponents, NSNumber;

@interface FINode : NSObject <FINodeProtocol, NSCopying>

@property (readonly, copy, nonatomic) BRContainer *brContainer;
@property (readonly, copy, nonatomic) FINode *brContainerDocuments;
@property (readonly, nonatomic) FINode *parent;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *contentModificationDate;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSString *itemIdentifier;
@property (readonly, copy, nonatomic) NSNumber *documentSize;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) FPItem *fpItem;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isPackage;
@property (readonly, copy, nonatomic) NSDate *lastUsedDate;
@property (readonly, copy, nonatomic) UTType *contentType;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) FPProviderDomain *fpDomain;
@property (readonly, copy, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSError *enumeratorError;
@property (readonly, nonatomic) NSNumber *childItemCount;
@property (readonly, nonatomic) NSArray *itemDecorations;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedByCurrentUser;
@property (readonly, nonatomic) BOOL isTopLevelSharedItem;
@property (readonly, nonatomic) BOOL isTrashed;
@property (readonly, nonatomic) NSPersonNameComponents *ownerNameComponents;

+ (void)start;
+ (void)end;
+ (id)nodeFromNodeRef:(struct OpaqueNodeRef { } *)a0;
+ (int)desktopServicesAPIVersion;
+ (id)fiNodeFromURL:(id)a0;
+ (id)iCloudLibrariesContainer;
+ (id)iCloudDefaultContainer;
+ (id)dataSeparatedICloudLibrariesContainer;
+ (id)dataSeparatedICloudDefaultContainer;
+ (id)providerDomainsContainer;
+ (id)sizeFolder:(id)a0;
+ (id)sizeFolder:(id)a0 forCopyInto:(id)a1 withDelegate:(id)a2;
+ (void)_forEachNodeDeep:(id /* block */)a0;
+ (id)_allInstances;
+ (id)_allRootInstances;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (id)original;
- (id)propertyAsNumber:(unsigned int)a0;
- (id)propertyAsDate:(unsigned int)a0;
- (id)propertyAsString:(unsigned int)a0;
- (id)propertyAsArray:(unsigned int)a0;
- (id)propertyAsNSObject:(unsigned int)a0;
- (id)propertyAsDictionary:(unsigned int)a0;
- (BOOL)propertyAsBool:(unsigned int)a0;
- (id)fetchTags:(BOOL)a0;
- (id)fetchLastUsedDate:(BOOL)a0;
- (unsigned long long)nodeIs:(unsigned long long)a0;
- (unsigned int)nodePermissions:(unsigned int)a0;
- (void)inlineProgressCancel;
- (struct OpaqueNodeRef { } *)nodeRef;
- (void *)asTNode;
- (struct shared_ptr<TFSInfo> { struct TFSInfo *x0; struct __shared_weak_count *x1; })fsInfo;
- (void)_forEachNodeDeep:(id /* block */)a0;
- (id)longDescription;

@end

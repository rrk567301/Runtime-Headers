@class FINode;

@interface _FIProxyNode : FICustomNode

@property (readonly, nonatomic) FINode *proxyNode;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)fileURL;
- (id)itemIdentifier;
- (id)source;
- (id)contentModificationDate;
- (id)displayName;
- (BOOL)isPackage;
- (id)typeIdentifier;
- (id)contentType;
- (id)fileName;
- (id)tags;
- (id)creationDate;
- (id)propertyAsDate:(unsigned int)a0;
- (id)enumeratorError;
- (id)itemDecorations;
- (unsigned long long)nodeIs:(unsigned long long)a0;
- (BOOL)propertyAsBool:(unsigned int)a0;
- (id)childItemCount;
- (id)documentSize;
- (id)fetchLastUsedDate:(BOOL)a0;
- (id)fetchTags:(BOOL)a0;
- (id)fpDomain;
- (id)fpItem;
- (id)initWithProxyNode:(id)a0;
- (void)inlineProgressCancel;
- (BOOL)isFolder;
- (BOOL)isShared;
- (BOOL)isSharedByCurrentUser;
- (BOOL)isTopLevelSharedItem;
- (BOOL)isTrashed;
- (id)iteratorIncludingInvisibleItems:(BOOL)a0 synchronous:(BOOL)a1;
- (id)lastUsedDate;
- (unsigned int)nodePermissions:(unsigned int)a0;
- (id)ownerNameComponents;
- (id)propertyAsArray:(unsigned int)a0;
- (id)propertyAsDictionary:(unsigned int)a0;
- (id)propertyAsNSObject:(unsigned int)a0;
- (id)propertyAsNumber:(unsigned int)a0;
- (id)propertyAsString:(unsigned int)a0;
- (BOOL)requiresForcedSyncing;
- (unsigned int)volumeIs:(unsigned int)a0;

@end

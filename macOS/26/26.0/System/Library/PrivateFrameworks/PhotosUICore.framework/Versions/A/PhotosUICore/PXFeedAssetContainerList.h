@class NSOrderedSet, NSString;

@interface PXFeedAssetContainerList : NSObject <PLAssetContainerList>

@property (copy, nonatomic) NSOrderedSet *sectionInfos;
@property (readonly, nonatomic) NSString *transientIdentifier;
@property (readonly, nonatomic) unsigned long long containersCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)managedObjectContext;
- (id)photoLibrary;
- (BOOL)isEmpty;
- (id)containers;
- (BOOL)canEditContainers;
- (id)containersRelationshipName;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

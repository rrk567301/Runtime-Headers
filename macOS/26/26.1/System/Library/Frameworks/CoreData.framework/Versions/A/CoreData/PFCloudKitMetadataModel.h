@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)ancillaryEntityOffset;
+ (void)_invalidateStaticCaches;
+ (void)initialize;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0 fromStore:(id)a1;
+ (id)ancillaryModelNamespace;
+ (unsigned long long)ancillaryEntityCount;
+ (BOOL)isExportableMetadataClassName:(id)a0;
+ (BOOL)isExportableMetadataEntity:(id)a0;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0;


@end

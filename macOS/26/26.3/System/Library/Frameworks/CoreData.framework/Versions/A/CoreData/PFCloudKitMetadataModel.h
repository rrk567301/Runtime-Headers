@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0 fromStore:(id)a1;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0;
+ (id)ancillaryModelNamespace;
+ (unsigned long long)ancillaryEntityCount;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityOffset;
+ (BOOL)isExportableMetadataEntity:(id)a0;
+ (BOOL)isExportableMetadataClassName:(id)a0;


@end

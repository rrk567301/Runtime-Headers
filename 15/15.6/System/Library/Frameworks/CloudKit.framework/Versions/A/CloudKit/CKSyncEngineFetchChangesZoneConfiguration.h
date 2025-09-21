@class NSString;

@interface CKSyncEngineFetchChangesZoneConfiguration : NSObject <CKPropertiesDescription, NSCopying>

@property unsigned long long resultsLimit;
@property char shouldFetchAssetContents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)redactedDescription;
- (void)CKDescribePropertiesUsing:(id)a0;
- (char)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;

@end

@class CKSyncEngineSendChangesScope, CKOperationGroup, NSString;

@interface CKSyncEngineSendChangesOptions : NSObject <CKPropertiesDescription, NSCopying>

@property (copy) CKSyncEngineSendChangesScope *scope;
@property (retain) CKOperationGroup *operationGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultOperationGroup;

- (id)initWithScope:(id)a0;
- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)redactedDescription;
- (id)zoneIDs;
- (id)CKDescriptionClassName;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)initWithZoneIDs:(id)a0;
- (id)operationGroupWith:(id)a0 scope:(id)a1;
- (void)setNilOperationGroup;
- (void)setOperationGroup:(id)a0 updateName:(BOOL)a1;

@end

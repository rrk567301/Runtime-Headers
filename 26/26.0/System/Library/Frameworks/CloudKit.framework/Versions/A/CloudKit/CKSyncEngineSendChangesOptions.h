@class CKSyncEngineSendChangesScope, CKOperationGroup, NSString;

@interface CKSyncEngineSendChangesOptions : NSObject <CKPropertiesDescription, NSCopying>

@property (copy) CKSyncEngineSendChangesScope *scope;
@property (retain) CKOperationGroup *operationGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultOperationGroup;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)zoneIDs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithScope:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (BOOL)CKDescriptionShouldPrintPointer;
- (id)CKDescriptionClassName;
- (id)initWithZoneIDs:(id)a0;
- (void)setOperationGroup:(id)a0 updateName:(BOOL)a1;
- (void)updateOperationGroupName;

@end

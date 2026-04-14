@class CKShareMetadata;

@interface UISHandleCloudKitShareAction : BSAction {
    CKShareMetadata *_cachedMetadata;
}

@property (readonly, nonatomic) CKShareMetadata *shareMetadata;

+ (id)cloudKitShareActionWithShareMetadata:(id)a0;
+ (void)loadCloudKitFramework;

- (long long)UIActionType;
- (id)data;
- (BOOL)isKindOfClass:(Class)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)initWithShareMetadata:(id)a0;

@end

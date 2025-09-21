@class CKShareMetadata;

@interface UISHandleCloudKitShareAction : BSAction {
    CKShareMetadata *_cachedMetadata;
}

@property (readonly, nonatomic) CKShareMetadata *shareMetadata;

+ (id)cloudKitShareActionWithShareMetadata:(id)a0;
+ (void)loadCloudKitFramework;

- (char)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)data;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithShareMetadata:(id)a0;

@end

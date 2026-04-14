@interface REMExternalSyncMetadataUtils : NSObject

+ (id)encodeExternalIdentifierForMarkedForDeletionObject:(id)a0;
+ (id)decodeExternalIdentifierForMarkedForDeletionObject:(id)a0;
+ (BOOL)shouldUseExternalIdentifierAsDeletionKeyWithAccountType:(long long)a0;

@end

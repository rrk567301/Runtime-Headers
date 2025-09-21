@interface REMExternalSyncMetadataUtils : NSObject

+ (id)decodeExternalIdentifierForMarkedForDeletionObject:(id)a0;
+ (id)encodeExternalIdentifierForMarkedForDeletionObject:(id)a0;
+ (char)shouldUseExternalIdentifierAsDeletionKeyWithAccountType:(long long)a0;

@end

@class NSString, NSData;

@interface IDSPendingOfflineMessageResponse : IDSMessage <NSCopying>

@property (copy) NSString *messageIdentifier;
@property (copy) NSData *ssm;

- (long long)command;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)messageBody;
- (void).cxx_destruct;
- (id)_IDSStorageCheckVersionNumber;
- (BOOL)_shouldUseLatestVersion;

@end

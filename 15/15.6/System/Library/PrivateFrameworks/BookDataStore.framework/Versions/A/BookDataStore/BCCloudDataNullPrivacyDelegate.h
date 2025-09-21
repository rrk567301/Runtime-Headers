@interface BCCloudDataNullPrivacyDelegate : NSObject <BCCloudDataPrivacyDelegate>

+ (id)nullPrivacyDelegate;

- (char)establishedSalt;
- (id)recordNameFromRecordType:(id)a0 identifier:(id)a1;

@end

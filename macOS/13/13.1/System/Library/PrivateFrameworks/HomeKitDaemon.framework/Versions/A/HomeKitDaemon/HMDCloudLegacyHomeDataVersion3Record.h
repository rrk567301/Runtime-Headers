@interface HMDCloudLegacyHomeDataVersion3Record : HMDCloudRecord

+ (id)legacyModelWithHomeDataV3:(id)a0;

- (id)data;
- (void)setData:(id)a0;
- (id)recordType;
- (void)clearData;
- (id)extractObjectChange;
- (BOOL)encodeObjectChange:(id)a0;
- (unsigned long long)objectEncoding;

@end

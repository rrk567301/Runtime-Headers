@class NSData;

@interface HMDCloudLegacyHomeDataRecord : HMDCloudRecord

@property (retain, nonatomic) NSData *dataVersion2;

+ (id)legacyModelWithHomeDataV0:(id)a0 homeDataV2:(id)a1;

- (id)data;
- (void)setData:(id)a0;
- (id)recordType;
- (void)clearData;
- (BOOL)encodeObjectChange:(id)a0;
- (id)extractObjectChange;
- (unsigned long long)objectEncoding;

@end

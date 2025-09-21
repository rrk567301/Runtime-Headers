@class CCDeviceSite, NSMutableDictionary;

@interface CCDatabaseDeviceMapping : NSObject {
    NSMutableDictionary *_deviceRowIdMap;
    NSMutableDictionary *_siteIdentifierMap;
    CCDeviceSite *_localDeviceSite;
}

+ (id)descriptionForSiteIdentifier:(id)a0;
+ (BOOL)_validateSiteIdentifier:(id)a0 outFormat:(unsigned char *)a1 error:(id *)a2;
+ (id)decodeAttestationGenerationFromSiteIdentifier:(id)a0 error:(id *)a1;
+ (id)decodeDeviceUUIDFromSiteIdentifier:(id)a0 error:(id *)a1;
+ (unsigned char)decodeFormatFromSiteIdentifier:(id)a0 error:(id *)a1;
+ (id)decodeResourceGenerationFromSiteIdentifier:(id)a0 error:(id *)a1;
+ (id)dictionaryFromSiteIdentifier:(id)a0 error:(id *)a1;
+ (id)encodeSiteIdentifierWithFormat:(unsigned char)a0 fromDeviceRecord:(id)a1 error:(id *)a2;

- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (id)localDeviceSite;
- (id)activeDeviceSiteWithDeviceUUID:(id)a0;
- (id)allActiveDeviceSites;
- (id)deviceRowIdForDeviceSite:(id)a0;
- (id)deviceRowIdForSiteIdentifier:(id)a0;
- (id)initWithDeviceRecords:(id)a0 siteIdentifierFormat:(unsigned char)a1 error:(id *)a2;
- (id)siteIdentifierForDeviceRowId:(id)a0;
- (id)deviceForDeviceRowId:(id)a0;
- (id)deviceRecordForDeviceRowId:(id)a0;

@end

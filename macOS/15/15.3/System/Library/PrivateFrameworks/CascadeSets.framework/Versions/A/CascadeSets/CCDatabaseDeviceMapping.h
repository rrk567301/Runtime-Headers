@class NSMutableDictionary;

@interface CCDatabaseDeviceMapping : NSObject {
    NSMutableDictionary *_deviceRowIdMap;
    NSMutableDictionary *_siteIdentifierMap;
}

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)deviceRowIdForSiteIdentifier:(id)a0;
- (id)siteIdentifierForDeviceRowId:(id)a0;
- (id)deviceRecordForDeviceRowId:(id)a0;
- (id)initWithDeviceRecords:(id)a0;

@end

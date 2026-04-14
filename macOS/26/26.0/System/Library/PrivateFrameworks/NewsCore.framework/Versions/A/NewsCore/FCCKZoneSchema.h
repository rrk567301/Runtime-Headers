@class NSString, CKRecordZoneID, NSSet;

@interface FCCKZoneSchema : NSObject {
    BOOL _shouldEncryptRecordNames;
    BOOL _shouldUseZoneWidePCS;
    BOOL _shouldUseSecureContainer;
    NSString *_zoneName;
    CKRecordZoneID *_zoneID;
    NSSet *_staticRecordNames;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

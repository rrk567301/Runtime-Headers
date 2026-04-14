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
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

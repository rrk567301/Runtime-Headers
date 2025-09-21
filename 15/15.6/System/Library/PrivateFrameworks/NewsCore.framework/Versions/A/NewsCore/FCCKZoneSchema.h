@class NSString, CKRecordZoneID, NSSet;

@interface FCCKZoneSchema : NSObject {
    char _shouldEncryptRecordNames;
    char _shouldUseZoneWidePCS;
    char _shouldUseSecureContainer;
    NSString *_zoneName;
    CKRecordZoneID *_zoneID;
    NSSet *_staticRecordNames;
}

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end

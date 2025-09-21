@class HDCodableMedicalIDData, NSArray, HDCloudSyncCodableMedicalID;

@interface HDCloudSyncMedicalIDRecord : HDCloudSyncRecord {
    HDCloudSyncCodableMedicalID *_underlyingCodableMedicalIDMessage;
}

@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
@property (readonly, nonatomic) NSArray *medicalIDLogs;

+ (id)recordType;
+ (char)hasFutureSchema:(id)a0;
+ (char)isMedicalIDRecord:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (char)requiresUnderlyingMessage;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (void)addMedicalIDEvent:(id)a0;
- (id)initInSyncCircle:(id)a0;
- (id)initInZone:(id)a0;
- (id)printDescription;
- (id)serializeUnderlyingMessage;

@end

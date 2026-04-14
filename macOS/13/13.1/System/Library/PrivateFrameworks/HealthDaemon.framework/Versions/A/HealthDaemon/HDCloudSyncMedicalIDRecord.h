@class HDCodableMedicalIDData, NSArray, HDCloudSyncCodableMedicalID;

@interface HDCloudSyncMedicalIDRecord : HDCloudSyncRecord {
    HDCloudSyncCodableMedicalID *_underlyingCodableMedicalIDMessage;
}

@property (retain, nonatomic) HDCodableMedicalIDData *medicalIDData;
@property (readonly, nonatomic) NSArray *medicalIDLogs;

+ (id)recordType;
+ (BOOL)requiresUnderlyingMessage;
+ (BOOL)hasFutureSchema:(id)a0;
+ (id)recordIDWithZoneID:(id)a0;
+ (BOOL)isMedicalIDRecord:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCKRecord:(id)a0 schemaVersion:(long long)a1;
- (id)serializeUnderlyingMessage;
- (id)printDescription;
- (id)initInSyncCircle:(id)a0;
- (id)initInZone:(id)a0;
- (void)addMedicalIDEvent:(id)a0;

@end

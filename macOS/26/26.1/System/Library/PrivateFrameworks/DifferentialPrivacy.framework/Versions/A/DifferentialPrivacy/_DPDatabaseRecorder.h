@class _DPStorage, NSSet;

@interface _DPDatabaseRecorder : _DPDataRecorder

@property (readonly, nonatomic) _DPStorage *db;
@property (readonly, nonatomic) NSSet *blacklistSet;

- (void)donateRandomizationEventToBitacoraForKey:(id)a0 succeeded:(BOOL)a1 errorCode:(int)a2 count:(int)a3;
- (void)recordFloatVectors:(id)a0;
- (void)recordWords:(id)a0;
- (void)recordBitValues:(id)a0;
- (void)recordNumbers:(id)a0;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;
- (BOOL)isMetadataValid:(id)a0;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (void)recordNumbersVectors:(id)a0;
- (void)directUploadRecords:(id)a0 forKey:(id)a1;
- (id)description;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1;
- (void)recordStrings:(id)a0;
- (id)initWithKey:(id)a0 storage:(id)a1 systemBlacklistPath:(id)a2 runtimeBlacklistPath:(id)a3;
- (void).cxx_destruct;
- (void)recordNumbers:(id)a0 metadata:(id)a1;
- (id)initWithKey:(id)a0 storage:(id)a1;
- (void)recordBitVectors:(id)a0;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (id)init;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1;

@end

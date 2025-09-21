@interface TRILogTreatmentProvider : TRILogTreatmentReader

+ (char)deleteFileAtPath:(id)a0;
+ (id)providerWithProjectId:(int)a0 paths:(id)a1;

- (char)addTreatment:(id)a0;
- (char)saveTreatments:(id)a0;
- (void)removeTreatment:(id)a0;
- (void)updatePersistedLogNamespace:(id)a0;

@end

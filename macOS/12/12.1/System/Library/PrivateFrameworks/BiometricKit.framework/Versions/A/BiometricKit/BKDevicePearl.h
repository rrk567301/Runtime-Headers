@protocol BKDevicePearlDelegate;

@interface BKDevicePearl : BKDevice

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate;
@property (readonly, nonatomic) long long pearlState;

- (BOOL)setTemplate:(id)a0 forIdentity:(id)a1 error:(id *)a2;
- (id)generateFieldDiagnosticsNonceWithError:(id *)a0;
- (BOOL)enableFieldDiagnosticsWithTatsuManifest:(id)a0 error:(id *)a1;
- (BOOL)disableFieldDiagnosticsWithError:(id *)a0;
- (id)fieldDiagnosticsRemainingTimeWithError:(id *)a0;
- (id)fieldDiagnosticsEncryptionKeyWithError:(id *)a0;
- (id)fieldDiagnosticsTatsuManifestWithError:(id *)a0;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)clearIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;

@end

@protocol BKDevicePearlDelegate;

@interface BKDevicePearl : BKDevice

@property (weak, nonatomic) id<BKDevicePearlDelegate> delegate;
@property (readonly, nonatomic) long long pearlState;

- (BOOL)setTemplate:(id)a0 forIdentity:(id)a1 error:(id *)a2;
- (id)supportsPeriocularEnrollmentWithError:(id *)a0;
- (id)periocularMatchStateWithError:(id *)a0;
- (id)periocularMatchStateForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)removePeriocularEnrollmentsFromIdentity:(id)a0 removeAll:(BOOL)a1 error:(id *)a2;
- (void)removePeriocularEnrollmentsFromIdentity:(id)a0 removeAll:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)removePeriocularEnrollmentsForUser:(unsigned int)a0 removeAll:(BOOL)a1 error:(id *)a2;
- (void)removePeriocularEnrollmentsForUser:(unsigned int)a0 removeAll:(BOOL)a1 reply:(id /* block */)a2;
- (id)generateFieldDiagnosticsNonceWithError:(id *)a0;
- (BOOL)enableFieldDiagnosticsWithTatsuManifest:(id)a0 error:(id *)a1;
- (BOOL)disableFieldDiagnosticsWithError:(id *)a0;
- (id)fieldDiagnosticsRemainingTimeWithError:(id *)a0;
- (id)fieldDiagnosticsEncryptionKeyWithError:(id *)a0;
- (id)fieldDiagnosticsTatsuManifestWithError:(id *)a0;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;
- (BOOL)clearIdentityMigrationFailureForUser:(unsigned int)a0 error:(id *)a1;

@end

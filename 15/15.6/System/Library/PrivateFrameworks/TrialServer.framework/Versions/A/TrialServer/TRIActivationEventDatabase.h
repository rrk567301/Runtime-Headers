@class TRIDatabase;

@interface TRIActivationEventDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (id)activationEventRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2;
- (struct { unsigned long long x0; })addRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5 carrierBundleId:(id)a6 carrierCountryCode:(id)a7 diagnosticsUsageEnabled:(char)a8 hasAne:(char)a9 aneVersion:(id)a10 transaction:(id)a11;
- (struct { unsigned long long x0; })deleteRecordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2;

@end

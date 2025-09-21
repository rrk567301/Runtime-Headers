@class _DPDaemonConnection;

@interface _DPXPCRecorder : _DPDataRecorder

@property (readonly, nonatomic) _DPDaemonConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;
- (void)recordFloatVectors:(id)a0 metadata:(id)a1;
- (void)handleReturn:(char)a0 forSelector:(id)a1 key:(id)a2 values:(id)a3 error:(id)a4;
- (void)recordBitValues:(id)a0;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (void)recordBitVectors:(id)a0;
- (void)recordFloatVectors:(id)a0;
- (void)recordNumbers:(id)a0;
- (void)recordNumbers:(id)a0 metadata:(id)a1;
- (void)recordNumbersVectors:(id)a0;
- (void)recordNumbersVectors:(id)a0 metadata:(id)a1;
- (void)recordStrings:(id)a0;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (void)recordWords:(id)a0;

@end

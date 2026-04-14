@interface MTLPrivateDataTable : NSObject

- (id)init;
- (void)setPrivateData:(id)a0 privateDataOffset:(unsigned long long)a1 logState:(id)a2;
- (void)releasePrivateData:(id *)a0 privateDataOffset:(unsigned long long)a1;
- (void)release;
- (void)setReportBufferInPrivateData:(id)a0 privateDataOffset:(unsigned long long)a1 logState:(id)a2;
- (BOOL)getPrivateDataAndOffset:(id)a0 privateData:(id *)a1 privateDataOffset:(unsigned long long *)a2;

@end

@class NSCountedSet;

@interface ABMetadataOperationSanityChecker : NSObject

@property (nonatomic) unsigned long long totalBytesWritten;
@property (retain, nonatomic) NSCountedSet *writeHistory;
@property (nonatomic) unsigned long long excessiveDataLoggingThreshold;

- (void).cxx_destruct;
- (id)init;
- (void)checkForExcessiveTotalData:(unsigned long long)a0;
- (void)checkForExcessiveWritesToURL:(id)a0;
- (void)checkLength:(unsigned long long)a0 ofIndividualFile:(id)a1;
- (void)willWriteDataWithLength:(unsigned long long)a0 toURL:(id)a1;

@end

@class NSCountedSet;

@interface ABMetadataOperationSanityChecker : NSObject

@property (nonatomic) unsigned long long totalBytesWritten;
@property (retain, nonatomic) NSCountedSet *writeHistory;
@property (nonatomic) unsigned long long excessiveDataLoggingThreshold;

- (id)init;
- (void).cxx_destruct;
- (void)willWriteDataWithLength:(unsigned long long)a0 toURL:(id)a1;
- (void)checkLength:(unsigned long long)a0 ofIndividualFile:(id)a1;
- (void)checkForExcessiveWritesToURL:(id)a0;
- (void)checkForExcessiveTotalData:(unsigned long long)a0;

@end

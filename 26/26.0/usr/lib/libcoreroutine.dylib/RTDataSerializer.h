@class NSString, NSOutputStream;

@interface RTDataSerializer : NSObject <NSStreamDelegate>

@property (retain, nonatomic) NSString *containerPath;
@property (retain, nonatomic) NSString *outputPrefix;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringFromDateWithFormat;

- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)pruneWithError:(id *)a0;
- (BOOL)saveData:(id)a0 error:(id *)a1;
- (unsigned int)adler32ChecksumWithData:(id)a0;
- (BOOL)archiveSavedDataToPath:(id)a0 error:(id *)a1;
- (void)closeOutputStream;
- (id)encodeVarint32WithValue:(unsigned int)a0;
- (BOOL)fileExceedsSizeLimit:(id)a0;
- (id)initWithContainerPath:(id)a0 outputPrefix:(id)a1;
- (id)mostRecentOutputPath;
- (id)newOutputPath;
- (id)sentinelAndVersionPrefix;
- (BOOL)teardownWithError:(id *)a0;

@end

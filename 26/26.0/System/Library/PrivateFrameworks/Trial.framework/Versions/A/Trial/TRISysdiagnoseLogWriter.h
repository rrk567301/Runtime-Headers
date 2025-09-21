@class NSString;

@interface TRISysdiagnoseLogWriter : NSObject

@property (readonly, nonatomic) NSString *outputDirectory;

- (id)initWithDirectory:(id)a0;
- (void).cxx_destruct;
- (BOOL)writeSysdiagnoseInfoForProvider:(id)a0 error:(id *)a1;

@end

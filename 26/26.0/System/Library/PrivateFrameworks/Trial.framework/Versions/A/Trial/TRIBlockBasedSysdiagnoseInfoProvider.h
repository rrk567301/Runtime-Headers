@class NSString;

@interface TRIBlockBasedSysdiagnoseInfoProvider : NSObject <TRISysdiagnoseInfoProviding>

@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) NSString *outputFilename;

- (id)filename;
- (void).cxx_destruct;
- (id)initWithOutputFilename:(id)a0 block:(id /* block */)a1;
- (id)sysdiagnoseLinesWithError:(id *)a0;

@end

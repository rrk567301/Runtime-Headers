@interface SoundAnalysis.SNLogMelSpectrogramCustomModelUtils : NSObject

+ (struct SNLogMelParameters { float x0; unsigned int x1; float x2; float x3; int x4; float x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; int x12; })defaultLogMelExtractionParameters;
+ (BOOL)overrideLogMelExtractionParameters:(struct SNLogMelParameters { float x0; unsigned int x1; float x2; float x3; int x4; float x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; int x12; } *)a0 withContentsOfParameterDictionary:(id)a1 error:(id *)a2;
+ (BOOL)resetLogMelExtractionParameters:(struct SNLogMelParameters { float x0; unsigned int x1; float x2; float x3; int x4; float x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; int x12; } *)a0 overrideWithParameterDictionary:(id)a1 error:(id *)a2;
+ (BOOL)validateModelDescription:(id)a0 logMelExtractionParameters:(struct SNLogMelParameters { float x0; unsigned int x1; float x2; float x3; int x4; float x5; BOOL x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; int x11; int x12; })a1 withHandler:(id /* block */)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end

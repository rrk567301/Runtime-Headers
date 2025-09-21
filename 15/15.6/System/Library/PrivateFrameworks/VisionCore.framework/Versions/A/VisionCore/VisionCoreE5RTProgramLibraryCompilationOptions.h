@class NSString;

@interface VisionCoreE5RTProgramLibraryCompilationOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long computeDeviceTypes;
@property (nonatomic) char fullyANEResident;
@property (nonatomic) NSString *customCompilationOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)createE5RTCompilerOptions:(struct e5rt_e5_compiler_options **)a0 error:(id *)a1;

@end

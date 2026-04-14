@class NSString;

@interface GTShaderProfilerDebugDump : NSObject {
    NSString *_directory;
}

+ (id)debugDump;

- (void).cxx_destruct;
- (void)setDirectory:(id)a0;
- (id)initWithDirectory:(id)a0;
- (id)filePathFromFileName:(id)a0;

@end

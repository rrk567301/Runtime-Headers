@class NSString;
@protocol MTL4Compiler;

@interface MTL4ToolsCompilerTask : MTLToolsObject <MTL4CompilerTaskGGDSPI>

@property (readonly) id<MTL4Compiler> compiler;
@property (readonly) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@interface SKGlobalSharedContextRegistry : NSObject

+ (void)setPrefersOpenGL:(BOOL)a0;
+ (void)setGlobalGLSharedContext:(id)a0;
+ (void)setGlobalMetalDevice:(id)a0;
+ (id)globalGLSharedContext;
+ (id)globalMetalDevice;
+ (BOOL)getPrefersOpenGL;

@end

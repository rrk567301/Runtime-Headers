@interface SKGlobalSharedContextRegistry : NSObject

+ (void)setGlobalGLSharedContext:(id)a0;
+ (void)setGlobalMetalDevice:(id)a0;
+ (id)globalGLSharedContext;
+ (void)setPrefersOpenGL:(BOOL)a0;
+ (id)globalMetalDevice;
+ (BOOL)getPrefersOpenGL;

@end

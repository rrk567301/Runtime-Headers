@interface SKGlobalSharedContextRegistry : NSObject

+ (id)globalGLSharedContext;
+ (id)globalMetalDevice;
+ (void)setGlobalGLSharedContext:(id)a0;
+ (void)setGlobalMetalDevice:(id)a0;
+ (void)setPrefersOpenGL:(char)a0;
+ (char)getPrefersOpenGL;

@end

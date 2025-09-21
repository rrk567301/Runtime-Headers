@interface NSJavaVirtualMachine : NSObject {
    void *_vmdata;
}

+ (void)initialize;
+ (id)defaultClassPath;
+ (id)defaultVirtualMachine;

- (void)dealloc;
- (id)init;
- (Class)findClass:(id)a0;
- (id)initWithClassPath:(id)a0;
- (void)_attachCurrentThread;
- (void)_enableCorrectJavaArchiving:(int)a0;
- (void)_detachCurrentThread;
- (void)_enableCorrectJavaUnarchiving:(int)a0;
- (void)attachCurrentThread;
- (Class)defineClass:(id)a0 withName:(id)a1;
- (void)detachCurrentThread;

@end

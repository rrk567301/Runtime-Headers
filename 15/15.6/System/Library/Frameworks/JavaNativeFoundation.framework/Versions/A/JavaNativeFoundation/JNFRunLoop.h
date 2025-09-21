@interface JNFRunLoop : NSObject

+ (void)initialize;
+ (id)javaRunLoopMode;
+ (void)_performCopiedBlock:(id /* block */)a0;
+ (void)_performDirectBlock:(id /* block */)a0;
+ (void)performOnMainThread:(SEL)a0 on:(id)a1 withObject:(id)a2 waitUntilDone:(char)a3;
+ (void)performOnMainThreadWaiting:(char)a0 withBlock:(id /* block */)a1;

@end

@interface JNFRunnable : NSObject

+ (id)invocationWithRunnable:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
+ (id /* block */)blockWithRunnable:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;

@end

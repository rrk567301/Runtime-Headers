@interface JNFException : NSException

@property (nonatomic) struct _jobject { } *javaException;

+ (void)raise:(const struct JNINativeInterface_ **)a0 as:(const char *)a1 reason:(const char *)a2;
+ (void)raise:(const struct JNINativeInterface_ **)a0 throwable:(struct _jobject { } *)a1;
+ (void)raiseUnnamedException:(const struct JNINativeInterface_ **)a0;
+ (void)throwToJava:(const struct JNINativeInterface_ **)a0 exception:(id)a1;
+ (void)throwToJava:(const struct JNINativeInterface_ **)a0 exception:(id)a1 as:(const char *)a2;

- (void)dealloc;
- (id)description;
- (id)init:(const struct JNINativeInterface_ **)a0 throwable:(struct _jobject { } *)a1;
- (void)_clearThrowableWithEnv:(const struct JNINativeInterface_ **)a0;
- (id)init:(const struct JNINativeInterface_ **)a0 as:(const char *)a1 reason:(const char *)a2;
- (void)_clearThrowableWithNonNullEnv:(const struct JNINativeInterface_ **)a0;
- (void)_setThrowable:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (void)_setThrowable:(struct _jobject { } *)a0 withNonNullEnv:(const struct JNINativeInterface_ **)a1;
- (id)initUnnamed:(const struct JNINativeInterface_ **)a0;
- (void)raiseToJava:(const struct JNINativeInterface_ **)a0;

@end

@interface JNFWeakJObjectWrapper : JNFJObjectWrapper

+ (id)wrapperWithJObject:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;

- (void)_destroyObj:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (struct _jobject { } *)_createObj:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (struct _jobject { } *)_getWithEnv:(const struct JNINativeInterface_ **)a0;

@end

@interface JNFJObjectWrapper : NSObject

@property (nonatomic) struct _jobject { } *jObject;

+ (id)wrapperWithJObject:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;

- (void)dealloc;
- (struct _jobject { } *)jObjectWithEnv:(const struct JNINativeInterface_ **)a0;
- (void)_destroyObj:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (struct _jobject { } *)_createObj:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (struct _jobject { } *)_getWithEnv:(const struct JNINativeInterface_ **)a0;
- (void)clearJObjectReference;
- (id)initWithJObject:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (void)setJObject:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;

@end

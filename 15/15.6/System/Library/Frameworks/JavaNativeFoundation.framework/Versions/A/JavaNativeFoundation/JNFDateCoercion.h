@interface JNFDateCoercion : NSObject <JNFTypeCoercion>

- (id)coerceJavaObject:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1 usingCoercer:(id)a2;
- (struct _jobject { } *)coerceNSObject:(id)a0 withEnv:(const struct JNINativeInterface_ **)a1 usingCoercer:(id)a2;

@end

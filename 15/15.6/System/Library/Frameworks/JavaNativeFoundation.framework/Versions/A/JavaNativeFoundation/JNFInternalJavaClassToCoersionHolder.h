@class NSObject;
@protocol JNFTypeCoercion;

@interface JNFInternalJavaClassToCoersionHolder : JNFJObjectWrapper

@property (retain, nonatomic) NSObject<JNFTypeCoercion> *coercion;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithCoercion:(id)a0 className:(id)a1 withEnv:(const struct JNINativeInterface_ **)a2;
- (char)isClassFor:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;

@end

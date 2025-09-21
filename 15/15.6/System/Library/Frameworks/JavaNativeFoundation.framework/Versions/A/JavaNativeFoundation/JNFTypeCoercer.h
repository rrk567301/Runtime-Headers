@class NSArray, NSMutableDictionary, NSObject;
@protocol JNFTypeCoercion;

@interface JNFTypeCoercer : NSObject <JNFTypeCoercion>

@property (retain, nonatomic) NSObject<JNFTypeCoercion> *parent;
@property (retain, nonatomic) NSMutableDictionary *nsClassToCoercion;
@property (retain, nonatomic) NSMutableDictionary *javaClassNameToCoercion;
@property (retain, nonatomic) NSArray *javaClassToCoercion;

- (void)dealloc;
- (id)init;
- (id)initWithParent:(id)a0;
- (void)addCoercion:(id)a0 forNSClass:(Class)a1 javaClass:(id)a2;
- (id)coerceJavaObject:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (id)coerceJavaObject:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1 usingCoercer:(id)a2;
- (struct _jobject { } *)coerceNSObject:(id)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (struct _jobject { } *)coerceNSObject:(id)a0 withEnv:(const struct JNINativeInterface_ **)a1 usingCoercer:(id)a2;
- (id)deriveCoercer;
- (id)findCoercerForJavaObject:(struct _jobject { } *)a0 withEnv:(const struct JNINativeInterface_ **)a1;
- (id)findCoercerForNSObject:(id)a0;
- (id)javaClassCacheUsingEnv:(const struct JNINativeInterface_ **)a0;

@end

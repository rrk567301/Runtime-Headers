@interface PTSerialization : NSObject

+ (Class)classForType:(unsigned int)a0;
+ (id)_errorWithCode:(long long)a0;
+ (id)objectFromData:(id)a0 error:(id *)a1;
+ (unsigned long long)sizeOfSerializedObject:(id)a0 options:(id)a1;
+ (id)_errorFromAtomError:(id)a0;
+ (id)_errorFromAtomStream:(id)a0;
+ (id)_errorFromAtomWriter:(id)a0;
+ (id)_errorNotSerializable;
+ (id)_errorUnsupportedVersion;
+ (char)_supportedOptions:(id)a0 forObject:(id)a1;
+ (id)dataFromObject:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)infoForType:(unsigned int)a0;
+ (char)isValidObject:(id)a0;
+ (char)registerSerializationClass:(Class)a0;
+ (void)registerType:(unsigned int)a0 providerClass:(Class)a1;
+ (void)registerTypeInfo:(id)a0;
+ (char)writeObject:(id)a0 toData:(id)a1 options:(id)a2 error:(id *)a3;

@end

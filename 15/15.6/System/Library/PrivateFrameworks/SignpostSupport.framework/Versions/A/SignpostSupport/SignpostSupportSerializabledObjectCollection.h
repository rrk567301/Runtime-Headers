@class NSArray, NSNumber;

@interface SignpostSupportSerializabledObjectCollection : NSObject

@property (readonly, nonatomic) NSArray *objectArray;
@property (readonly, nonatomic) NSNumber *formatVersion;
@property (readonly, nonatomic) unsigned long long machContinuousTimeFirst;
@property (readonly, nonatomic) unsigned long long machContinuousTimeLast;

+ (id)_deserializedDictionaryForData:(id)a0 errorOut:(id *)a1;
+ (char)_enumerateSignpostObjectsInDeserializedCollectionDictionary:(id)a0 processingBlock:(id /* block */)a1 errorOut:(id *)a2;
+ (char)_versionIsSupported:(id)a0;
+ (char)enumerateSignpostSupportObjectsInSerializedCollection:(id)a0 processingBlock:(id /* block */)a1 errorOut:(id *)a2;
+ (char)timeRangeForSerializedCollection:(id)a0 continuousTimeFirstOut:(unsigned long long *)a1 continuousTimeLastOut:(unsigned long long *)a2 errorOut:(id *)a3;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 errorOut:(id *)a1;
- (id)initWithSerializeableObjectArray:(id)a0;
- (id)newSerializedCollection:(char)a0;

@end

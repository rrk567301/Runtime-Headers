@interface FedStatsDataEncoder : NSObject

+ (BOOL)encodeDataAndRecord:(id)a0 dataTypeContent:(id)a1 baseKey:(id)a2 errorOut:(id *)a3;
+ (BOOL)encodeDataArrayAndRecord:(id)a0 dataTypeContent:(id)a1 baseKey:(id)a2 errorOut:(id *)a3;
+ (BOOL)encodeDataAndRecord:(id)a0 dataTypeContent:(id)a1 metadata:(id)a2 baseKey:(id)a3 errorOut:(id *)a4;
+ (BOOL)encodeDataArrayAndRecord:(id)a0 dataTypeContent:(id)a1 metadata:(id)a2 baseKey:(id)a3 errorOut:(id *)a4;
+ (BOOL)record:(id)a0 metadata:(id)a1 baseKey:(id)a2;

@end

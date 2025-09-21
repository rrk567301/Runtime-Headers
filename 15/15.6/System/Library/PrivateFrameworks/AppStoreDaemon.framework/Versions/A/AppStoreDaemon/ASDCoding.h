@interface ASDCoding : NSObject

+ (id)createDataByEncodingError:(id)a0;
+ (id)createErrorByDecodingData:(id)a0;
+ (char)securelyEncodeObject:(id)a0 forKey:(id)a1 withCoder:(id)a2 error:(id *)a3;

- (id)init;

@end

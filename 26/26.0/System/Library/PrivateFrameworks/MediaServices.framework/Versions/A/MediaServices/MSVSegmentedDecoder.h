@class MSVSegmentedCodingPackage, NSArray, NSDictionary, NSError;

@interface MSVSegmentedDecoder : NSCoder

@property (retain, nonatomic) MSVSegmentedCodingPackage *package;
@property (retain, nonatomic) Class rootClass;
@property (retain, nonatomic) NSArray *subcoders;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSError *decodeError;

+ (id)decodedObjectOfClass:(Class)a0 fromPackage:(id)a1 error:(id *)a2;
+ (id)decodedObjectOfClass:(Class)a0 fromPackage:(id)a1 userInfo:(id)a2 error:(id *)a3;
+ (id)decodedObjectOfClasses:(id)a0 fromPackage:(id)a1 error:(id *)a2;
+ (id)decodedObjectOfClasses:(id)a0 fromPackage:(id)a1 userInfo:(id)a2 error:(id *)a3;

- (float)decodeFloatForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)error;
- (void).cxx_destruct;
- (long long)decodingFailurePolicy;
- (void)__setError:(id)a0;
- (id)_coderForKey:(id)a0;
- (id)decodeRootObjectOfClass:(Class)a0 error:(id *)a1;
- (id)decodeRootObjectOfClasses:(id)a0 error:(id *)a1;
- (id)initWithCodingPackage:(id)a0 error:(id *)a1;
- (id)initWithCodingPackage:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (void)msv_setUserInfo:(id)a0;
- (id)msv_userInfo;

@end

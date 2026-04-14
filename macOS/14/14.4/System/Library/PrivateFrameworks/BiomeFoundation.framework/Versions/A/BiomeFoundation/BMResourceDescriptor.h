@class NSString;

@interface BMResourceDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSString *value;

+ (BOOL)_validateInput:(id)a0 description:(id)a1 error:(id *)a2;
+ (id)descriptorsFromEncodedString:(id)a0 error:(id *)a1;
+ (id)encodedStringFromDescriptors:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)encodedString;
- (id)initWithKey:(id)a0 value:(id)a1 error:(id *)a2;
- (id)initWithEncodedString:(id)a0 error:(id *)a1;

@end

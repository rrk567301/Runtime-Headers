@class NSString;

@interface HMIJSONArchiver : NSCoder {
    id _container;
}

@property long long options;
@property (readonly) NSString *objectJSON;
@property (readonly) NSString *objectPrettyJSON;

+ (id)JSONObjectWithObject:(id)a0 options:(long long)a1;
+ (id)JSONObjectStringWithObject:(id)a0;
+ (id)JSONObjectStringWithObject:(id)a0 pretty:(BOOL)a1 options:(long long)a2;

- (id)init;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (BOOL)allowsKeyedCoding;
- (id)object;
- (void).cxx_destruct;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (id)initWithArray;
- (id)initWithDictionary;
- (BOOL)_containerIsArray;
- (void)_addClassToContainer:(Class)a0;
- (void)_addValueToContainer:(id)a0 forKey:(id)a1;
- (id)_JSONObjectWithObject:(id)a0 options:(long long)a1;
- (id)_valueForNumber:(id)a0;

@end

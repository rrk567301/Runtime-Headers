@class NSMutableDictionary;

@interface REMStoreInvocationValueStorage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *valueStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)storeProperty:(id)a0 forKey:(id)a1;
- (id)storedPropertyForKey:(id)a0;

@end

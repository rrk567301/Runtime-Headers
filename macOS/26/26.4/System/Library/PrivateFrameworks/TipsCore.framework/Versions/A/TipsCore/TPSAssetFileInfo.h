@class NSString, TPSSize;

@interface TPSAssetFileInfo : TPSSerializableObject

@property (nonatomic) long long scale;
@property (nonatomic) long long userInterface;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) TPSSize *size;

+ (BOOL)supportsSecureCoding;
+ (id)na_identity;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;

@end

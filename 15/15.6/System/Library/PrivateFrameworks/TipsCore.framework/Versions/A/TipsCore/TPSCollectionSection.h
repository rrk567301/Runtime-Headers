@class NSString, NSArray;

@interface TPSCollectionSection : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSArray *collections;
@property (readonly, nonatomic, getter=isFeatured) char featured;

+ (id)identifierForDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeCollection:(id)a0;
- (id)initWithDictionary:(id)a0 collections:(id)a1;
- (id)initWithIdentifier:(id)a0 text:(id)a1 collections:(id)a2;

@end

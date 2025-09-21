@class NSString, NSArray;

@interface TPSCollectionSection : TPSSerializableObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isFeatured) BOOL featured;
@property (readonly, nonatomic, getter=isYourTips) BOOL yourTips;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *supportID;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSArray *subSectionIdentifiers;

+ (id)identifierForDictionary:(id)a0;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 collections:(id)a1;
- (id)initWithIdentifier:(id)a0 collections:(id)a1;
- (id)initWithDictionary:(id)a0 subSectionIdentifiers:(id)a1;
- (void)removeCollections:(id)a0;

@end

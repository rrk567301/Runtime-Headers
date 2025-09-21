@class NSArray;

@interface INObjectCollection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, copy, nonatomic) NSArray *allItems;
@property (nonatomic) char usesIndexedCollation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithItems:(id)a0;
- (id)initWithSections:(id)a0;
- (id)_typedObjectCollectionWithCodableAttribute:(id)a0;
- (id)_untypedObjectCollectionWithItemClass:(Class)a0 codableAttribute:(id)a1 error:(id *)a2;

@end

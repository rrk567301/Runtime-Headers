@class NSMutableDictionary;

@interface TSUExtendedAttributeCollection : NSObject {
    NSMutableDictionary *_attributes;
}

+ (char)removeExtraExtendedAttributesAtPath:(id)a0 forIntent:(unsigned int)a1 options:(int)a2 error:(id *)a3;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0 options:(int)a1 error:(id *)a2;
- (id)initWithAttributes:(id)a0;
- (id)allAttributes;
- (id)extendedAttributeForName:(id)a0;
- (id)initWithPath:(id)a0 forRemoval:(char)a1 options:(int)a2 error:(id *)a3;
- (char)setAttributeCollectionToPath:(id)a0 intent:(unsigned int)a1 options:(int)a2 error:(id *)a3;
- (char)setAttributeCollectionToPath:(id)a0 intent:(unsigned int)a1 options:(int)a2 forRemoval:(char)a3 error:(id *)a4;
- (void)setExtendedAttributeValue:(id)a0 forName:(id)a1;

@end

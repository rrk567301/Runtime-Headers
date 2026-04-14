@class NSMutableDictionary, NSMutableArray;

@interface TreeNode : NSObject <NSCoding, NSCopying> {
    TreeNode *parent;
    NSMutableArray *children;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_metadata;
    char *value;
}

+ (id)treeWithValue:(char *)a0;

- (id)prettyDescription;
- (id)parent;
- (id)enumerator;
- (id)metaDataForKey:(id)a0;
- (void)setMetaData:(id)a0 forKey:(id)a1;
- (id)valueForAttribute:(id)a0;
- (void)_setParent:(id)a0;
- (BOOL)setValue:(id)a0 forAttribute:(id)a1;
- (char *)value;
- (void)encodeWithCoder:(id)a0;
- (id)initWithValue:(char *)a0;
- (id)description;
- (void)dealloc;
- (id)children;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)fullPath;
- (int)numberOfChildren;
- (id)nodeForPath:(char *)a0;
- (id)allAttributes;
- (id)alternatePath;
- (void)removeValueForAttribute:(id)a0;
- (id)allMetaDataKeys;
- (void)_addChild:(id)a0 numChildren:(int)a1;
- (void)_addToPrettyDescription:(id)a0 withPrefix:(id)a1;
- (id)_addTreePathFromParts:(char **)a0 fromIndex:(unsigned int)a1 numParts:(unsigned int)a2;
- (void)removeTreeNode:(id)a0;
- (char **)_makeCharPartsFromPath:(char *)a0 numParts:(unsigned int *)a1;
- (id)_nodeForPathFromParts:(char **)a0 fromIndex:(unsigned int)a1 numParts:(unsigned int)a2 lastFoundNode:(id *)a3;
- (id)addTreePath:(char *)a0 withType:(int)a1;
- (char *)fullpath;
- (id)metaDataKeys;
- (id)nodeForPath:(char *)a0 returningLastNode:(id *)a1;
- (void)setAlternatePath:(id)a0;

@end

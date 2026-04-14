@class NSMutableDictionary, NSMutableArray;

@interface TreeNode : NSObject <NSCoding, NSCopying> {
    TreeNode *parent;
    NSMutableArray *children;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_metadata;
    char *value;
}

+ (id)treeWithValue:(char *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)enumerator;
- (char *)value;
- (id)parent;
- (id)valueForAttribute:(id)a0;
- (void)_setParent:(id)a0;
- (id)children;
- (id)prettyDescription;
- (id)initWithValue:(char *)a0;
- (id)fullPath;
- (int)numberOfChildren;
- (id)nodeForPath:(char *)a0;
- (BOOL)setValue:(id)a0 forAttribute:(id)a1;
- (id)allAttributes;
- (void)setMetaData:(id)a0 forKey:(id)a1;
- (id)metaDataForKey:(id)a0;
- (id)addTreePath:(char *)a0 withType:(int)a1;
- (void)removeTreeNode:(id)a0;
- (id)nodeForPath:(char *)a0 returningLastNode:(id *)a1;
- (void)removeValueForAttribute:(id)a0;
- (char *)fullpath;
- (char **)_makeCharPartsFromPath:(char *)a0 numParts:(unsigned int *)a1;
- (id)_addTreePathFromParts:(char **)a0 fromIndex:(unsigned int)a1 numParts:(unsigned int)a2;
- (id)_nodeForPathFromParts:(char **)a0 fromIndex:(unsigned int)a1 numParts:(unsigned int)a2 lastFoundNode:(id *)a3;
- (void)_addChild:(id)a0 numChildren:(int)a1;
- (id)alternatePath;
- (void)_addToPrettyDescription:(id)a0 withPrefix:(id)a1;
- (void)setAlternatePath:(id)a0;
- (id)allMetaDataKeys;
- (id)metaDataKeys;

@end

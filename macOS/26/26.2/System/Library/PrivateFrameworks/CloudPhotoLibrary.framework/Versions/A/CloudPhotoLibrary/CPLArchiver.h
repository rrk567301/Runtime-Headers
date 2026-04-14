@class NSString, NSMutableArray;

@interface CPLArchiver : NSCoder {
    id _archive;
    id _rootObject;
    NSMutableArray *_context;
    void /* function */ *_pushContext;
    void /* function */ *_popContext;
    BOOL _unarchiving;
}

@property (readonly, nonatomic) NSString *archiverContext;
@property (readonly, nonatomic) BOOL forDisplay;
@property (retain, nonatomic) id archiveCursor;

+ (id)fullDescriptionForObject:(id)a0;
+ (id)unarchiveObjectWithData:(id)a0 ofClass:(Class)a1;
+ (id)archivedPropertyListWithRootObject:(id)a0 usingBlock:(id /* block */)a1;
+ (id)displayablePropertyListWithRootObject:(id)a0;
+ (id)_displayableObjectForObject:(id)a0;
+ (id)archivedDataWithRootObject:(id)a0;
+ (id)archivedPropertyListWithRootObject:(id)a0;
+ (id)unarchivedObjectWithPropertyList:(id)a0 ofClass:(Class)a1;
+ (id)displayableDictionaryForDictionary:(id)a0;
+ (void)_initializeSmallKeyMapping;
+ (id)archivedDataWithRootObject:(id)a0 usingBlock:(id /* block */)a1;
+ (id)_displayableArrayForArray:(id)a0;

- (long long)decodeIntegerForKey:(id)a0;
- (void)encodeObject:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (double)decodeDoubleForKey:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (int)decodeInt32ForKey:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (float)decodeFloatForKey:(id)a0;
- (void)encodeConditionalObject:(id)a0;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)a0;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)decodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(void *)a2;
- (void)encodeSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (id)initWithRootObject:(id)a0 forDisplay:(BOOL)a1 block:(id /* block */)a2;
- (id)archivedPropertyList;
- (void)encodePropertyList:(id)a0;
- (void)encodePoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeByrefObject:(id)a0;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (struct CGPoint { double x0; double x1; })decodePointForKey:(id)a0;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (id)initWithRootObject:(id)a0 forDisplay:(BOOL)a1;
- (id)decodePropertyListForKey:(id)a0;
- (void).cxx_destruct;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (void)decodeValuesOfObjCTypes:(const char *)a0;
- (void)encodeValuesOfObjCTypes:(const char *)a0;
- (struct CGSize { double x0; double x1; })decodeSizeForKey:(id)a0;
- (id)decodePropertyList;
- (id)rootObject;
- (id)decodeObject;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeRectForKey:(id)a0;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (id)initWithArchive:(id)a0 rootClass:(Class)a1;
- (BOOL)containsValueForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)encodeRootObject:(id)a0;
- (void)encodeBycopyObject:(id)a0;

@end

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

+ (id)_displayableObjectForObject:(id)a0;
+ (id)unarchivedObjectWithPropertyList:(id)a0 ofClass:(Class)a1;
+ (void)_initializeSmallKeyMapping;
+ (id)displayableDictionaryForDictionary:(id)a0;
+ (id)archivedPropertyListWithRootObject:(id)a0 usingBlock:(id /* block */)a1;
+ (id)archivedDataWithRootObject:(id)a0 usingBlock:(id /* block */)a1;
+ (id)_displayableArrayForArray:(id)a0;
+ (id)unarchiveObjectWithData:(id)a0 ofClass:(Class)a1;
+ (id)archivedDataWithRootObject:(id)a0;
+ (id)fullDescriptionForObject:(id)a0;
+ (id)displayablePropertyListWithRootObject:(id)a0;
+ (id)archivedPropertyListWithRootObject:(id)a0;

- (BOOL)allowsKeyedCoding;
- (int)decodeIntForKey:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (double)decodeDoubleForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (void)encodePropertyList:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (id)initWithArchive:(id)a0 rootClass:(Class)a1;
- (id)decodePropertyList;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeByrefObject:(id)a0;
- (void)decodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(void *)a2;
- (id)archivedPropertyList;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (id)rootObject;
- (void)encodeBycopyObject:(id)a0;
- (struct CGPoint { double x0; double x1; })decodePointForKey:(id)a0;
- (void)encodeConditionalObject:(id)a0;
- (void)encodeObject:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeRectForKey:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (BOOL)containsValueForKey:(id)a0;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)a0;
- (id)decodePropertyListForKey:(id)a0;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeRootObject:(id)a0;
- (void).cxx_destruct;
- (void)encodePoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (id)initWithRootObject:(id)a0 forDisplay:(BOOL)a1;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })decodeSizeForKey:(id)a0;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)initWithRootObject:(id)a0 forDisplay:(BOOL)a1 block:(id /* block */)a2;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (id)decodeObject;
- (void)encodeValuesOfObjCTypes:(const char *)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)encodeSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)decodeValuesOfObjCTypes:(const char *)a0;

@end

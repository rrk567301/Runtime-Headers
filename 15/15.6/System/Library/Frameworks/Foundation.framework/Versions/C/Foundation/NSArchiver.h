@class NSMutableData;

@interface NSArchiver : NSCoder {
    void *mdata;
    void *pointerTable;
    void *stringTable;
    void *ids;
    void *map;
    void *replacementTable;
    void *reserved;
}

@property (readonly, retain) NSMutableData *archiverData;

+ (void)initialize;
+ (char)archiveRootObject:(id)a0 toFile:(id)a1;
+ (id)archivedDataWithRootObject:(id)a0;
+ (id)classNameEncodedForTrueClassName:(id)a0;
+ (void)encodeClassName:(id)a0 intoClassName:(id)a1;

- (void)dealloc;
- (id)data;
- (void)replaceObject:(id)a0 withObject:(id)a1;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (id)classNameEncodedForTrueClassName:(id)a0;
- (void)encodeBytes:(const void *)a0 length:(unsigned long long)a1;
- (void)encodeClassName:(id)a0 intoClassName:(id)a1;
- (void)encodeConditionalObject:(id)a0;
- (void)encodeDataObject:(id)a0;
- (void)encodeObject:(id)a0;
- (void)encodePropertyList:(id)a0;
- (void)encodeRootObject:(id)a0;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeValuesOfObjCTypes:(const char *)a0;
- (id)initForWritingWithMutableData:(id)a0;
- (long long)versionForClassName:(id)a0;

@end

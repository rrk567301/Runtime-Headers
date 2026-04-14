@class NSData;

@interface PKBOM : NSObject {
    NSData *_bomData;
    struct _BOMBom { } *_BOMBom;
}

+ (id)_NSFileTypeFromBOMFSObjType:(int)a0;
+ (id)_attributesOfBOMFSObject:(struct _BOMFSObject { } *)a0;
+ (BOOL)_setAttributes:(id)a0 ofBOMFSObject:(struct _BOMFSObject { } *)a1;

- (void)dealloc;
- (unsigned long long)totalSize;
- (id)initWithBOMPath:(id)a0;
- (id)initWithBOMData:(id)a0;
- (struct _BOMBom { } *)BOMBom;
- (id)attributesOfItemAtPath:(id)a0;
- (id)directoryEnumerator;
- (id)subpathsOfDirectoryAtPath:(id)a0;
- (unsigned long long)fileCount;

@end

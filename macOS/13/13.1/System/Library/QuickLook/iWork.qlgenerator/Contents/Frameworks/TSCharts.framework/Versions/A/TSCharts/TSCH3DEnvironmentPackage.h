@class NSArray;

@interface TSCH3DEnvironmentPackage : NSObject <NSCopying> {
    NSArray *_materials;
}

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addMaterial:(id)a0;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)didInitFromSOS;
- (void)affect:(id)a0 states:(id)a1 scene:(id)a2 texturePool:(id)a3;
- (id)materialEnumerator;
- (unsigned long long)materialCount;

@end

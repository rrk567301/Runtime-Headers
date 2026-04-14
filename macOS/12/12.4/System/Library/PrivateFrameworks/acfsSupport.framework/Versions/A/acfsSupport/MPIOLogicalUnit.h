@class NSString, NSMutableDictionary, NSMutableArray, NSLock;

@interface MPIOLogicalUnit : NSObject {
    NSLock *logicalUnitMutex;
}

@property (readonly) unsigned long long serviceEntryID;
@property (readonly, copy) NSString *logicalUnitID;
@property (copy) NSString *logicalUnitAlias;
@property (readonly, copy) NSString *logicalUnitVendorID;
@property (readonly, copy) NSString *logicalUnitProductID;
@property (readonly) unsigned int logicalUnitAlgorithm;
@property (readonly) unsigned int logicalUnitBatchCount;
@property (readonly, copy) NSMutableArray *logicalUnitVolumesArray;
@property (readonly, copy) NSMutableDictionary *logicalUnitPaths;

+ (id)propertiesForEntryID:(unsigned long long)a0;
+ (id)logicalUnitIdentifierFromPropertiesDict:(id)a0;
+ (id)volumeInfoForLUNVolume:(unsigned int)a0;
+ (unsigned long long)getTypeID;

- (void)dealloc;
- (unsigned long long)_cfTypeID;
- (id)getProperties;
- (void)removePath:(id)a0;
- (void)removeAllPaths;
- (void)rebuildPropertiesFromEntry;
- (struct SCSILogicalUnitStatistics { unsigned long long x0; unsigned long long x1; unsigned long long x2; })grabStatsBuffer:(unsigned long long)a0;
- (BOOL)isPathEnabled:(id)a0 error:(id *)a1;
- (BOOL)enablePath:(id)a0 error:(id *)a1;
- (BOOL)disablePath:(id)a0 error:(id *)a1;
- (id)getPaths;
- (BOOL)enableAllPaths:(id *)a0;
- (BOOL)disableAllPaths:(id *)a0;
- (BOOL)setAlgorithm:(unsigned int)a0 error:(id *)a1;
- (BOOL)setBatchCount:(unsigned int)a0 error:(id *)a1;
- (id)getCurrentStatistics;
- (id)getPathIDs;
- (id)initWithIOKitServiceEntry:(unsigned long long)a0;
- (void)addPath:(id)a0 pathID:(unsigned long long)a1;

@end

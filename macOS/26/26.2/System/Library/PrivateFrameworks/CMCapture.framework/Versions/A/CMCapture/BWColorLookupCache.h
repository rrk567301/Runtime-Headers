@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BWColorLookupCache : NSObject {
    NSObject<OS_dispatch_queue> *_coreImageCacheIsolationQueue;
    NSMutableDictionary *_coreImageTableCache;
}

+ (void)initialize;

- (id)fetchColorLookupTablesForFilter:(id)a0;
- (id)identityColorLookupTable;
- (id)blackColorLookupTable;
- (id)interpolatedColorLookupTableFromTable:(id)a0 toTable:(id)a1 fractionComplete:(float)a2;
- (id)whiteColorLookupTable;
- (id)init;
- (id)colorLookupTablesForFilter:(id)a0;
- (void)dealloc;

@end

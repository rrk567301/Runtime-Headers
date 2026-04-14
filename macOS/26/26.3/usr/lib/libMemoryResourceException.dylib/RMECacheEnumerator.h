@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getLogPathsSortedByTime;
+ (id)getEPLProfilePath;
+ (id)getLogPathsSortedByProcessFrequency;
+ (id)getLogPathsForSystemDiagnostic;
+ (id)getGcoreSpoolWithCreateIfNecessary:(BOOL)a0;
+ (id)getLogContainer:(BOOL)a0;

- (id)initCacheEnumeratorWithVolume:(id)a0;
- (id)nextValidURL;
- (id)initCacheEnumerator;
- (void).cxx_destruct;

@end

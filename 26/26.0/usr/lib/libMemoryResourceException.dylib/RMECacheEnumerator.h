@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getLogContainer:(BOOL)a0;
+ (id)getGcoreSpoolWithCreateIfNecessary:(BOOL)a0;
+ (id)getLogPathsSortedByProcessFrequency;
+ (id)getLogPathsForSystemDiagnostic;
+ (id)getEPLProfilePath;
+ (id)getLogPathsSortedByTime;

- (id)initCacheEnumerator;
- (id)initCacheEnumeratorWithVolume:(id)a0;
- (id)nextValidURL;
- (void).cxx_destruct;

@end

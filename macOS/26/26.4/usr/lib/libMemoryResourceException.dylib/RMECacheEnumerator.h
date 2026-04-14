@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getEPLProfilePath;
+ (id)getLogPathsSortedByProcessFrequency;
+ (id)getGcoreSpoolWithCreateIfNecessary:(BOOL)a0;
+ (id)getLogPathsSortedByTime;
+ (id)getLogContainer:(BOOL)a0;
+ (id)getLogPathsForSystemDiagnostic;

- (int)deleteFilesOlderThanThreshold:(double)a0;
- (id)initCacheEnumeratorWithVolume:(id)a0;
- (void).cxx_destruct;
- (id)nextValidURL;
- (id)initCacheEnumerator;

@end

@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getLogPathsForSystemDiagnostic;
+ (id)getLogContainer:(BOOL)a0;
+ (id)getGcoreSpoolWithCreateIfNecessary:(BOOL)a0;
+ (id)getLogPathsSortedByProcessFrequency;
+ (id)getEPLProfilePath;
+ (id)getLogPathsSortedByTime;

- (id)nextValidURL;
- (id)initCacheEnumerator;
- (id)initCacheEnumeratorWithVolume:(id)a0;
- (void).cxx_destruct;

@end

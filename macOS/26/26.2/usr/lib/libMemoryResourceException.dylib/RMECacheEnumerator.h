@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getLogContainer:(BOOL)a0;
+ (id)getEPLProfilePath;
+ (id)getGcoreSpoolWithCreateIfNecessary:(BOOL)a0;
+ (id)getLogPathsSortedByTime;
+ (id)getLogPathsForSystemDiagnostic;
+ (id)getLogPathsSortedByProcessFrequency;

- (id)initCacheEnumeratorWithVolume:(id)a0;
- (id)initCacheEnumerator;
- (id)nextValidURL;
- (void).cxx_destruct;

@end

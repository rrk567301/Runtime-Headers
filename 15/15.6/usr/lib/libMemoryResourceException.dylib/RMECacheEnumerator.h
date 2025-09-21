@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {
    NSDirectoryEnumerator *_internalEnumerator;
    NSString *_volume;
}

+ (id)getEPLProfilePath;
+ (id)getGcoreSpoolWithCreateIfNecessary:(char)a0;
+ (id)getLogContainer:(char)a0;
+ (id)getLogPathsForSystemDiagnostic;
+ (id)getLogPathsSortedByProcessFrequency;
+ (id)getLogPathsSortedByTime;

- (void).cxx_destruct;
- (id)initCacheEnumerator;
- (id)initCacheEnumeratorWithVolume:(id)a0;
- (id)nextValidURL;

@end

@class NSString, NSMutableDictionary, NSURL, NSSet, geo_isolater, NSCache;

@interface _GEORegionStoreSharedCache : NSObject <GEOResourceManifestTileGroupObserver> {
    BOOL _initDone;
    unsigned long long _area;
    unsigned int _resourceVersion;
    NSURL *_dbURL;
    NSURL *_ccURL;
    geo_isolater *_darwinListenersIsolater;
    NSMutableDictionary *_darwinListeners;
    NSSet *_supportedLanguageCodes;
    NSCache *_regionCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

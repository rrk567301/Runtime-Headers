@protocol GEOTileLoaderObserver;

@interface _GEOTileLoaderObserverWrapper : NSObject {
    id<GEOTileLoaderObserver> _observer;
    char _implementsLoadedKeyWithSize;
    char _implementsLoadedKeyWithoutSize;
    char _implementsFailedToLoadKey;
}

- (void).cxx_destruct;

@end

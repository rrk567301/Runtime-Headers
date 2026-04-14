@class NSString, GEOLocation, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GEOGeographicMetadataTileFetcher : NSObject <GEOGeographicMetadataFetcher> {
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tileStyle;
    GEOLocation *_location;
    unsigned long long _options;
    NSArray *_tileDatas;
    NSDictionary *_resultURLs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

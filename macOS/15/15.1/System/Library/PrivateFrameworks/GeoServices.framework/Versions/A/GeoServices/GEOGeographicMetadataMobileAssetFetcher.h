@class NSString, NSDictionary, GEOMobileAssetResource;

@interface GEOGeographicMetadataMobileAssetFetcher : NSObject <GEOGeographicMetadataFetcher> {
    unsigned long long _type;
    NSDictionary *_parameters;
    id /* block */ _responseBlock;
    GEOMobileAssetResource *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSString;
@protocol PXPlacesGeotaggable;

@interface _PXPlacesImageCacheKey : NSObject {
    id<PXPlacesGeotaggable> _geotaggable;
    NSString *_key;
}

- (id)key;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)geotaggable;
- (id)initWithGeotaggable:(id)a0 andKey:(id)a1;

@end

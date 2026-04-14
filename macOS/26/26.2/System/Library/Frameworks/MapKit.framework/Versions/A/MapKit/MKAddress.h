@class NSString;
@protocol GEOMapItem, GEOMapItemPrivate;

@interface MKAddress : NSObject {
    id<GEOMapItem> _geoMapItem;
}

@property (readonly, nonatomic, getter=_geoMapItem) id<GEOMapItemPrivate> geoMapItem;
@property (readonly, copy, nonatomic) NSString *fullAddress;
@property (readonly, copy, nonatomic) NSString *shortAddress;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFullAddress:(id)a0 shortAddress:(id)a1;
- (id)initWithGeoMapItem:(id)a0;

@end

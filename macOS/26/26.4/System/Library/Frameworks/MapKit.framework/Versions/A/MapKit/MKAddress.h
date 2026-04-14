@class NSString;
@protocol GEOMapItem, GEOMapItemPrivate;

@interface MKAddress : NSObject {
    id<GEOMapItem> _geoMapItem;
}

@property (readonly, nonatomic, getter=_geoMapItem) id<GEOMapItemPrivate> geoMapItem;
@property (readonly, copy, nonatomic) NSString *fullAddress;
@property (readonly, copy, nonatomic) NSString *shortAddress;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFullAddress:(id)a0 shortAddress:(id)a1;
- (id)initWithGeoMapItem:(id)a0;

@end

@class NSString;
@protocol GEOMapItem;

@interface MKAddressRepresentations : NSObject

@property (readonly, nonatomic, getter=_geoMapItem) id<GEOMapItem> geoMapItem;
@property (readonly, copy, nonatomic) NSString *cityName;
@property (readonly, copy, nonatomic) NSString *cityWithContext;
@property (readonly, copy, nonatomic) NSString *regionName;
@property (readonly, copy, nonatomic) NSString *regionCode;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)cityWithContextUsingStyle:(long long)a0;
- (id)fullAddressIncludingRegion:(BOOL)a0 singleLine:(BOOL)a1;
- (id)initWithGeoMapItem:(id)a0;

@end

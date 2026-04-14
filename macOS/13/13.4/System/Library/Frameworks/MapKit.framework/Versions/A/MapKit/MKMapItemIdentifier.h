@class GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying> {
    GEOMapItemIdentifier *_geoMapItemIdentifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)muid;
- (id)initWithMUID:(unsigned long long)a0;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (id)geoMapItemIdentifier;
- (id)initWithGEOMapItemIdentifier:(id)a0;

@end

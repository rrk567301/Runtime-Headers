@class NSString, GEOMapItemIdentifier;

@interface MKMapItemIdentifier : NSObject <NSCopying, NSSecureCoding> {
    GEOMapItemIdentifier *_geoMapItemIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifierString;

- (unsigned long long)muid;
- (id)initWithIdentifierString:(id)a0;
- (id)initWithMUID:(unsigned long long)a0 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
- (unsigned long long)hash;
- (id)initWithMUID:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMUID:(unsigned long long)a0 resultProviderID:(int)a1 coordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a2;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)geoMapItemIdentifier;
- (id)initWithGEOMapItemIdentifier:(id)a0;

@end

@interface RTTripClusterMetadataFetchOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double originVisitLatitude;
@property (readonly, nonatomic) double originVisitLongitude;
@property (readonly, nonatomic) double destinationVisitLatitude;
@property (readonly, nonatomic) double destinationVisitLongitude;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithOriginVisitLatitude:(double)a0 originVisitLongitude:(double)a1 destinationVisitLatitude:(double)a2 destinationVisitLongitude:(double)a3;

@end

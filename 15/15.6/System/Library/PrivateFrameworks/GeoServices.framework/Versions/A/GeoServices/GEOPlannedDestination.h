@class NSData, NSDate;

@interface GEOPlannedDestination : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSDate *arrivalDate;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) NSData *handle;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCoordinate:(struct { double x0; double x1; })a0;
- (id)initWithMapItem:(id)a0;
- (id)initWithMapItemHandle:(id)a0;

@end

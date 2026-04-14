@interface LoiLocation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double locationHorizontalUncertaintyMeters;
@property double locationLatitudeDeg;
@property double locationLongitudeDeg;
@property int locationReferenceFrame;

- (void)encodeWithCoder:(id)a0;
- (id)initWithLocation:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)toLocation;

@end

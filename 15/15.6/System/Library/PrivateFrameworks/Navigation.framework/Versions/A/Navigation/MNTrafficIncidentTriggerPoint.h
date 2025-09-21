@interface MNTrafficIncidentTriggerPoint : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) struct { unsigned int index; float offset; } referenceCoordinate;
@property (readonly, nonatomic) char allowsShifting;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReferenceCoordinate:(struct { unsigned int x0; float x1; })a0 allowsShifting:(char)a1;
- (char)shouldActivateForLocation:(id)a0;

@end

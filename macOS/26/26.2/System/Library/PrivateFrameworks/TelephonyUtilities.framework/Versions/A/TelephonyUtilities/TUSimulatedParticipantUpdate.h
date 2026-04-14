@interface TUSimulatedParticipantUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct TUSimulatedParticipantUpdateHasSet { unsigned char spatialPersonaEnabled : 1; } hasSet;
@property (nonatomic, getter=isSpatialPersonaEnabled) BOOL spatialPersonaEnabled;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;

@end

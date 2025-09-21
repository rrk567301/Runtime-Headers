@class NSArray;

@interface SHHapticSpatialTrackInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *offsets;
@property (readonly) double timeDrift;
@property (readonly) BOOL matchesStereo;
@property (readonly) double startOffset;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpatialStartOffset:(double)a0 offsets:(id)a1 timeDrift:(double)a2 matchesStereo:(BOOL)a3;

@end

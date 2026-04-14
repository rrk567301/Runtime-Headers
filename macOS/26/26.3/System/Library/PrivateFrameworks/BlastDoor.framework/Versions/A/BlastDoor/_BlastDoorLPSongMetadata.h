@class NSString;

@interface _BlastDoorLPSongMetadata : _BlastDoorLPSpecializationMetadata <_BlastDoorLPSongMetadata>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

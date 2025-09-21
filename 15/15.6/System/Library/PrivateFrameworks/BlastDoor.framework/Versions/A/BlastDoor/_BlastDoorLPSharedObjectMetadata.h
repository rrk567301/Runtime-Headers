@class NSString, _BlastDoorLPSpecializationMetadata, _BlastDoorLPImage;

@interface _BlastDoorLPSharedObjectMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *information;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (nonatomic) char isCollaboration;
@property (retain, nonatomic) _BlastDoorLPSpecializationMetadata *specialization;

+ (char)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end

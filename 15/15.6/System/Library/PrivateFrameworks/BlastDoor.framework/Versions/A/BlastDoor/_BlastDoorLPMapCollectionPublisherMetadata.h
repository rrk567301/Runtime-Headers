@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPMapCollectionPublisherMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (nonatomic) unsigned int numberOfPublishedCollections;

+ (char)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end

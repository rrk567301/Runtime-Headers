@class NSString, NSDate, _BlastDoorLPImage;

@interface _BlastDoorLPApplePhotosMomentMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;
@property (nonatomic) unsigned long long otherItemCount;
@property (retain, nonatomic) _BlastDoorLPImage *keyPhoto;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSDate *earliestAssetDate;
@property (copy, nonatomic) NSDate *latestAssetDate;

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

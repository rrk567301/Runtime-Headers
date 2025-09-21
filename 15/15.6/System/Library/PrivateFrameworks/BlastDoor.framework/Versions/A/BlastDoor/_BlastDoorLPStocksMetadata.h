@class NSString, _BlastDoorLPImage;

@interface _BlastDoorLPStocksMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *combinedTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *footnote;
@property (retain, nonatomic) _BlastDoorLPImage *icon;

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

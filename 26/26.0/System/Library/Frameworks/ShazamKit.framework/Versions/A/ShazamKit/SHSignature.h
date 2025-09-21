@class NSString, SHSignatureMetrics, NSData, NSDate, AVAudioTime, NSUUID;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *internalDescription;
@property (retain) NSDate *audioStartDate;
@property (retain) AVAudioTime *time;
@property (copy) SHSignatureMetrics *metrics;
@property (readonly) NSData *spectralPeaksData;
@property (readonly) NSData *musicalFeaturesData;
@property (readonly) double spectralPeaksDuration;
@property (readonly) double musicalFeaturesDuration;
@property (readonly) NSUUID *_ID;
@property (readonly) double duration;
@property (readonly) NSData *dataRepresentation;

+ (id)signatureFromData:(id)a0 atTime:(id)a1 error:(id *)a2;
+ (long long)signatureTypeFromData:(id)a0;
+ (id)signatureWithDataRepresentation:(id)a0 error:(id *)a1;
+ (BOOL)splitSignatureFromData:(id)a0 intoSpectralPeaks:(id *)a1 andMusicalFeatures:(id *)a2 error:(id *)a3;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)_descriptionWithInternalState:(BOOL)a0;
- (id)_startDateBasedUponAudioTime:(id)a0;
- (void)commonSetupWithID:(id)a0 spectralPeaksData:(id)a1 musicalFeaturesData:(id)a2 startTime:(id)a3;
- (double)durationForSignatureData:(id)a0;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2 error:(id *)a3;
- (id)initWithID:(id)a0 spectralPeaksData:(id)a1 musicalFeaturesData:(id)a2 startTime:(id)a3 error:(id *)a4;

@end

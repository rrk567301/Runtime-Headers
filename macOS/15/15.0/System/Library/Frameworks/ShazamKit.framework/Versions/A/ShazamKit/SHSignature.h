@class NSUUID, SHSignatureMetrics, NSData, NSDate, AVAudioTime;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDate *audioStartDate;
@property (retain) AVAudioTime *time;
@property (copy) SHSignatureMetrics *metrics;
@property (readonly) NSUUID *_ID;
@property (readonly) double duration;
@property (readonly) NSData *dataRepresentation;

+ (id)signatureFromData:(id)a0 atTime:(id)a1 error:(id *)a2;
+ (id)signatureWithDataRepresentation:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (id)_startDateBasedUponAudioTime:(id)a0;
- (void)commonSetupWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2 error:(id *)a3;

@end

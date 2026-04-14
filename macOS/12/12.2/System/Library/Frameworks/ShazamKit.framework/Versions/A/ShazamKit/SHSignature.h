@class NSUUID, SHSignatureMetrics, NSData, NSDate, AVAudioTime;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSUUID *ID;
@property (retain) NSDate *audioStartDate;
@property (retain) AVAudioTime *time;
@property (copy) SHSignatureMetrics *metrics;
@property (readonly) double duration;
@property (readonly) NSData *dataRepresentation;

+ (id)signatureWithDataRepresentation:(id)a0 error:(id *)a1;
+ (id)signatureFromData:(id)a0 atTime:(id)a1 error:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataRepresentation:(id)a0 error:(id *)a1;
- (void)commonSetupWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2;
- (id)_startDateBasedUponAudioTime:(id)a0;
- (id)initWithID:(id)a0 dataRepresentation:(id)a1 startTime:(id)a2;

@end

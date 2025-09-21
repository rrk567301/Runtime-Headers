@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property char supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)initInternal;
- (id)descriptionInternal;
- (char)_internalIsCameraAssistanceEnabled;
- (char)_internalIsCameraAssistanceInClientProcess;
- (char)_internalIsExtendedDistanceMeasurementEnabled;
- (char)_internalIsMemoryAssertionRequired;
- (char)_internalIsPowerAssertionRequired;

@end

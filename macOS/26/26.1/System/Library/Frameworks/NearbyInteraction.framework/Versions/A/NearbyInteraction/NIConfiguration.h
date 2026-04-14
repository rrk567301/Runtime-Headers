@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (BOOL)_internalIsPowerAssertionRequired;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (id)descriptionInternal;
- (BOOL)_internalIsMemoryAssertionRequired;
- (id)initWithConfiguration:(id)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)initInternal;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

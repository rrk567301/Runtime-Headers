@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (BOOL)_internalIsMemoryAssertionRequired;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initInternal;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (BOOL)_internalIsPowerAssertionRequired;

@end

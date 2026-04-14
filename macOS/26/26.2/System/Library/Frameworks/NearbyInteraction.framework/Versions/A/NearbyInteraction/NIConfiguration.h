@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (BOOL)_internalIsMemoryAssertionRequired;
- (id)initWithCoder:(id)a0;
- (id)descriptionInternal;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (BOOL)_internalIsPowerAssertionRequired;
- (id)init;
- (id)initInternal;
- (id)initWithConfiguration:(id)a0;

@end

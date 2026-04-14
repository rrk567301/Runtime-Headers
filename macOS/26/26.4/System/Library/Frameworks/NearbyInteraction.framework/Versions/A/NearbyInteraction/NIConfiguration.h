@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (BOOL)_internalIsMemoryAssertionRequired;
- (BOOL)_internalIsPowerAssertionRequired;
- (id)descriptionInternal;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (id)initWithConfiguration:(id)a0;
- (id)initInternal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

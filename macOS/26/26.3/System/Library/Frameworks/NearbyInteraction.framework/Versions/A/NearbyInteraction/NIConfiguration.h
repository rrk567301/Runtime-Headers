@interface NIConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL supportsCameraAssistance;
@property unsigned long long suspensionPolicy;
@property unsigned long long enabledGestures;

+ (id)new;

- (id)initWithConfiguration:(id)a0;
- (id)initInternal;
- (BOOL)_internalIsCameraAssistanceEnabled;
- (BOOL)_internalIsCameraAssistanceInClientProcess;
- (id)init;
- (BOOL)_internalIsPowerAssertionRequired;
- (BOOL)_internalIsMemoryAssertionRequired;
- (BOOL)_internalIsExtendedDistanceMeasurementEnabled;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;

@end

@class NSDictionary, NSArray, NSSet;

@interface AXSSMotionTrackingInputConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *plistDictionary;
@property (copy, nonatomic) NSArray *orderedInputPreference;
@property (copy, nonatomic) NSSet *allowedTrackingTypes;
@property (nonatomic) char allowSeparateInputForExpressions;
@property (readonly, copy, nonatomic) NSArray *orderedCameraInputPreference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (id)initWithOrderedInputPreference:(id)a0 allowedTrackingTypes:(id)a1 allowSeparateInputForExpressions:(char)a2;
- (char)isEqualToMotionTrackingInputConfiguration:(id)a0;
- (char)supportsTrackingType:(unsigned long long)a0;

@end

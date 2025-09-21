@class NSString;

@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *_name;
@property (readonly, copy, nonatomic) NSString *name;

+ (char)supportsSecureCoding;
+ (id)videoFileInputWithName:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)uniqueIdentifier;
- (id)plistDictionary;
- (id)initWithPlistDictionary:(id)a0;
- (char)isVideoFile;
- (char)supportsExpressions;
- (unsigned long long)trackingType;

@end

@class NSString;

@interface AXSSMotionTrackingVideoFileInput : AXSSMotionTrackingInput

@property (copy, nonatomic) NSString *_name;
@property (readonly, copy, nonatomic) NSString *name;

+ (BOOL)supportsSecureCoding;
+ (id)videoFileInputWithName:(id)a0;

- (id)plistDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPlistDictionary:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)uniqueIdentifier;
- (void).cxx_destruct;
- (BOOL)isVideoFile;
- (BOOL)supportsExpressions;
- (unsigned long long)trackingType;

@end

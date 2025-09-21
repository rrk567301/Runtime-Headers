@class NSData;

@interface DMFFetchScreenshotResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSData *screenshotData;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;

@end

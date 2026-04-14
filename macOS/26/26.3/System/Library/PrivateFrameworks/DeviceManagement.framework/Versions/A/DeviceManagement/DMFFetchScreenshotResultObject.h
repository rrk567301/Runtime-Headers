@class NSData;

@interface DMFFetchScreenshotResultObject : CATTaskResultObject

@property (readonly, nonatomic) NSData *screenshotData;

+ (BOOL)supportsSecureCoding;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

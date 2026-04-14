@class NSData, NSString;

@interface CRKFetchScreenshotResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *screenshotData;
@property (copy, nonatomic) NSString *studentIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

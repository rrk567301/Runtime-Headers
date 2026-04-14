@class NSString;

@interface CRKSetUserImageResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *imageIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

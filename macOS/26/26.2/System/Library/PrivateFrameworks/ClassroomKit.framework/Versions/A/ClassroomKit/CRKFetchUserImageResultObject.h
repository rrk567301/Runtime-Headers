@class NSData;

@interface CRKFetchUserImageResultObject : CATTaskResultObject

@property (copy, nonatomic) NSData *userImageData;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

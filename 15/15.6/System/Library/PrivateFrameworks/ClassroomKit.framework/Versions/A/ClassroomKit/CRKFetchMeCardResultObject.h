@class NSDictionary;

@interface CRKFetchMeCardResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *cardInfo;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

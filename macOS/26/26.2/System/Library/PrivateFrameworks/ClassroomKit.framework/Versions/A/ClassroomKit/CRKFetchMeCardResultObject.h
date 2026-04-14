@class NSDictionary;

@interface CRKFetchMeCardResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *cardInfo;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

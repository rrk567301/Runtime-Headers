@class NSDate;

@interface CRKFetchInternetDateResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDate *date;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSDate;

@interface CRKFetchInternetDateResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDate *date;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

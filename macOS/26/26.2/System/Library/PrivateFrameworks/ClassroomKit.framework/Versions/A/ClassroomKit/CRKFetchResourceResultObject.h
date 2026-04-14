@class NSData;

@interface CRKFetchResourceResultObject : CATTaskResultObject

@property (retain, nonatomic) NSData *resourceData;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

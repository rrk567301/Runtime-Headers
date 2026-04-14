@class NSArray;

@interface DMFFetchCertificatesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *certificates;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCertificates:(id)a0;

@end

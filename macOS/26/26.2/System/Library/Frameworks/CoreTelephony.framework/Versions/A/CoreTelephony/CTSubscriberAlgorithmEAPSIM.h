@class NSData;

@interface CTSubscriberAlgorithmEAPSIM : CTSubscriberAlgorithm

@property (retain, nonatomic) NSData *rand;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

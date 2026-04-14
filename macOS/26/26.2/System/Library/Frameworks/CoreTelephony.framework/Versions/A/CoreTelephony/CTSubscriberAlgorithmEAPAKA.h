@class NSData;

@interface CTSubscriberAlgorithmEAPAKA : CTSubscriberAlgorithm

@property (retain, nonatomic) NSData *rand;
@property (retain, nonatomic) NSData *autn;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

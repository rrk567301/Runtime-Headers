@class NSString;

@interface TPSContextualPortraitEvent : TPSContextualEvent

@property (nonatomic) double confidenceThreshold;
@property (copy, nonatomic) NSString *topicID;

+ (BOOL)supportsSecureCoding;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (unsigned int)minObservationCount;

@end

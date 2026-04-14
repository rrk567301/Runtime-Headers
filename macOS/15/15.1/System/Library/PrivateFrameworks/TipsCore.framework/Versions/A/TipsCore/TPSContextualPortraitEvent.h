@class NSString;

@interface TPSContextualPortraitEvent : TPSContextualEvent

@property (nonatomic) double confidenceThreshold;
@property (copy, nonatomic) NSString *topicID;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned int)minObservationCount;

@end

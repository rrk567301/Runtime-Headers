@class NSString, HomeAttributeCleaningJob, HomeAttributeRange;

@interface HomeAttributeValue : INObject

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) char boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) long long integerValue;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic) long long limitValue;
@property (nonatomic) long long unit;
@property (nonatomic, retain) HomeAttributeRange *rangeValue;
@property (nonatomic) long long type;
@property (nonatomic, retain) HomeAttributeCleaningJob *cleaningJob;

- (char)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end

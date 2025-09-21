@class NSString;

@interface TITypologyRecordSetOriginalInput : TITypologyRecord

@property (copy, nonatomic) NSString *originalInput;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void)applyToStatistic:(id)a0;

@end

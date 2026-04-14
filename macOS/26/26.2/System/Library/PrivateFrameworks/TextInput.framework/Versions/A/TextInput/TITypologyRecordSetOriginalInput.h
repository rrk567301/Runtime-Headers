@class NSString;

@interface TITypologyRecordSetOriginalInput : TITypologyRecord

@property (copy, nonatomic) NSString *originalInput;

+ (BOOL)supportsSecureCoding;

- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end

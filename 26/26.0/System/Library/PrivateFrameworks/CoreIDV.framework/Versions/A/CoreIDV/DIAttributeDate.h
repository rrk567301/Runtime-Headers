@class NSDate;

@interface DIAttributeDate : DIAttribute <NSSecureCoding> {
    BOOL _requireDay;
    BOOL _requireMonth;
    BOOL _requireYear;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requireDay;
@property (nonatomic) BOOL requireMonth;
@property (nonatomic) BOOL requireYear;
@property (copy, nonatomic) NSDate *defaultValue;
@property (copy, nonatomic, getter=getCurrentValue) NSDate *currentValue;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

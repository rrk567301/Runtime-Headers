@class NSArray;

@interface DIAttributeCamera : DIAttribute <NSSecureCoding> {
    NSArray *_scanRequirements;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *scanRequirements;
@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue;

- (id)initWithCoder:(id)a0;
- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

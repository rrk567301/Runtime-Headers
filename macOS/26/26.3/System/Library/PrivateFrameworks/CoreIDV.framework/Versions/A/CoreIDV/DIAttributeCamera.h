@class NSArray;

@interface DIAttributeCamera : DIAttribute <NSSecureCoding> {
    NSArray *_scanRequirements;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *scanRequirements;
@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue;

- (id)defaultValue;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

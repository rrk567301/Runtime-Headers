@interface ASCProgressOfferMetadata : ASCOfferMetadata

@property (readonly, nonatomic) double percent;
@property (readonly, nonatomic) char cancellable;
@property (nonatomic, getter=isIndeterminate) char indeterminate;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initIndeterminate;
- (id)initWithPercent:(double)a0 cancellable:(char)a1;
- (char)isProgress;

@end

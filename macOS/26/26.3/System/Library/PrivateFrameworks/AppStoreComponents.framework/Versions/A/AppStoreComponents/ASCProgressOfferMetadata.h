@interface ASCProgressOfferMetadata : ASCOfferMetadata

@property (readonly, nonatomic) double percent;
@property (readonly, nonatomic) BOOL cancellable;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initIndeterminate;
- (id)initWithPercent:(double)a0 cancellable:(BOOL)a1;
- (BOOL)isProgress;

@end

@interface PPTripEventQuery : PPEventQuery

@property (nonatomic) unsigned char tripOptions;

+ (char)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

@class NSString;

@interface MADMLEnhancementRequest : MADRequest

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) char modelPreparationOnly;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

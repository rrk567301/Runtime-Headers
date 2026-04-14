@class NSString;

@interface MADMLEnhancementRequest : MADRequest

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL modelPreparationOnly;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

@class NSString;

@interface MADMLEnhancementRequest : MADRequest

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) BOOL modelPreparationOnly;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end

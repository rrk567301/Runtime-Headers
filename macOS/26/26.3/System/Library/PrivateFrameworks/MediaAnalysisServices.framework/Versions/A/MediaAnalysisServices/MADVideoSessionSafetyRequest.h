@interface MADVideoSessionSafetyRequest : MADVideoSessionRequest

@property (nonatomic) BOOL enableDetectionTypeN;
@property (nonatomic) BOOL enableDetectionTypeGV;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

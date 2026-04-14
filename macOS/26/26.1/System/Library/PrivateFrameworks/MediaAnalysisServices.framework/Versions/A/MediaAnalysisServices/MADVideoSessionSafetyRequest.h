@interface MADVideoSessionSafetyRequest : MADVideoSessionRequest

@property (nonatomic) BOOL enableDetectionTypeN;
@property (nonatomic) BOOL enableDetectionTypeGV;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)init;

@end

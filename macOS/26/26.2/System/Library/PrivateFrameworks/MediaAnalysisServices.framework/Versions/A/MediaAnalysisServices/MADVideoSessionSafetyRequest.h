@interface MADVideoSessionSafetyRequest : MADVideoSessionRequest

@property (nonatomic) BOOL enableDetectionTypeN;
@property (nonatomic) BOOL enableDetectionTypeGV;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;

@end

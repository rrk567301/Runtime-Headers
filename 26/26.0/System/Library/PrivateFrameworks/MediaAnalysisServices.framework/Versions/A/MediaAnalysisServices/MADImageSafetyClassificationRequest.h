@class NSString;

@interface MADImageSafetyClassificationRequest : MADRequest

@property (copy, nonatomic) NSString *stagedText;
@property (copy, nonatomic) NSString *conversationIdentifier;
@property (nonatomic) BOOL enableNudityDetection;
@property (nonatomic) BOOL enableGoreViolenceDetection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

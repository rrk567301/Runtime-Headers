@class NSString, NSArray;

@interface MADCaptionResult : MADResult

@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) char containsUnsafeContent;
@property (readonly, nonatomic) char isLowConfidence;
@property (readonly, nonatomic) NSArray *classificationIdentifiers;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCaption:(id)a0 score:(float)a1 containsUnsafeContent:(char)a2 isLowConfidence:(char)a3 classificationIdentifiers:(id)a4;

@end

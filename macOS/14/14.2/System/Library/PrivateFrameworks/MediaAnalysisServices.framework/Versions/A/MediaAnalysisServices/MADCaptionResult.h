@class NSString, NSArray;

@interface MADCaptionResult : MADResult

@property (readonly, nonatomic) NSString *caption;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) BOOL isLowConfidence;
@property (readonly, nonatomic) NSArray *classificationIdentifiers;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCaption:(id)a0 score:(float)a1 isLowConfidence:(BOOL)a2 classificationIdentifiers:(id)a3;

@end

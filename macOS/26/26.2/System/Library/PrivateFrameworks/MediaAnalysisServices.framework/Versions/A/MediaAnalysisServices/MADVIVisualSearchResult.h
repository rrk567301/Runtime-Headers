@class NSArray, NSData;

@interface MADVIVisualSearchResult : MADResult

@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) NSData *userFeedbackPayload;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResultItems:(id)a0 andUserFeedbackPayload:(id)a1;

@end

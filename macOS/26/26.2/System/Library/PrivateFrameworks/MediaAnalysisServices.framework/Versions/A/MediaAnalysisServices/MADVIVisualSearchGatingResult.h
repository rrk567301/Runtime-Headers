@class NSArray, NSData;

@interface MADVIVisualSearchGatingResult : MADResult

@property (readonly, nonatomic) NSArray *resultItems;
@property (readonly, nonatomic) NSData *payload;
@property (readonly, nonatomic) BOOL passedGating;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResultItems:(id)a0 andPayload:(id)a1;

@end

@class NSError;

@interface SFErrorFeedback : SFFeedback

@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;

@end

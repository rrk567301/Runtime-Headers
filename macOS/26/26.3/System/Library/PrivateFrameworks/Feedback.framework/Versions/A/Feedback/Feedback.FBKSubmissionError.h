@class NSDictionary, NSError, NSString;

@interface Feedback.FBKSubmissionError : NSObject <NSSecureCoding> {
    void /* function */ serverErrorDetails;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSDictionary *serverErrorDetails;
@property (nonatomic, retain) NSError *underlyingError;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

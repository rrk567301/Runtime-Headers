@class NSString, NSNumber, NSDictionary;

@interface ISSignInPromptResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long returnCode;
@property (retain) NSString *username;
@property (retain) NSString *password;
@property (retain) NSNumber *suppressionCheckboxState;
@property (retain) NSDictionary *serverResponse;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

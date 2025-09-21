@class NSString;

@interface AFSiriDebugUIRequest : AFSiriRequest {
    NSString *_message;
    char _frontmost;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)createResponse;
- (id)initWithMessage:(id)a0 makeAppFrontmost:(char)a1;
- (char)_makeAppFrontmost;

@end

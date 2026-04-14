@class NSString;

@interface AFSiriDebugUIRequest : AFSiriRequest {
    NSString *_message;
    BOOL _frontmost;
}

+ (BOOL)supportsSecureCoding;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;
- (id)initWithMessage:(id)a0 makeAppFrontmost:(BOOL)a1;
- (BOOL)_makeAppFrontmost;

@end

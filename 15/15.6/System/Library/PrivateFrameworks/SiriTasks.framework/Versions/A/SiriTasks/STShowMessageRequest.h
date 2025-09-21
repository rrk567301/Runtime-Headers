@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
    char _showAsDraft;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)createResponse;
- (char)showAsDraft;
- (char)_makeAppFrontmost;
- (id)_initWithMessage:(id)a0 showAsDraft:(char)a1;

@end

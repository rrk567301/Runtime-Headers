@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
    BOOL _showAsDraft;
}

+ (BOOL)supportsSecureCoding;

- (id)message;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;
- (BOOL)showAsDraft;
- (BOOL)_makeAppFrontmost;
- (id)_initWithMessage:(id)a0 showAsDraft:(BOOL)a1;

@end

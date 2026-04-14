@class STSiriMessage;

@interface STSendDraftMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (id)message;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithMessage:(id)a0;
- (id)createResponse;
- (BOOL)_makeAppFrontmost;

@end

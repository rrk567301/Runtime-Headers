@class STSiriMessage;

@interface STSendDraftMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)message;
- (id)_initWithMessage:(id)a0;
- (id)createResponse;
- (BOOL)_makeAppFrontmost;

@end

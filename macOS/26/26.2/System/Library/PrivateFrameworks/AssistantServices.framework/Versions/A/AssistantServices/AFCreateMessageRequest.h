@class STSiriMessage;

@interface AFCreateMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)message;
- (id)_initWithMessage:(id)a0;
- (id)createResponseWithMessageIdentifier:(id)a0;

@end

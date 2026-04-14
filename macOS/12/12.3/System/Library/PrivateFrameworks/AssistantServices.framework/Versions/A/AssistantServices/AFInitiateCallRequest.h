@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest {
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)createResponse;
- (id)call;
- (id)_initWithCall:(id)a0;

@end

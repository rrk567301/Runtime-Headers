@class STSiriContext;

@interface AFContextResponse : AFSiriResponse {
    STSiriContext *_context;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_context;
- (id)_initWithRequest:(id)a0 context:(id)a1;

@end

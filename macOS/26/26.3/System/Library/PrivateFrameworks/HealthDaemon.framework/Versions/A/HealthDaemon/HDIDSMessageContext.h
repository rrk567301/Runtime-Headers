@class NSString, IDSMessageContext;

@interface HDIDSMessageContext : NSObject {
    IDSMessageContext *_context;
}

@property (readonly, copy, nonatomic) NSString *originalGUID;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMessageContext:(id)a0;

@end

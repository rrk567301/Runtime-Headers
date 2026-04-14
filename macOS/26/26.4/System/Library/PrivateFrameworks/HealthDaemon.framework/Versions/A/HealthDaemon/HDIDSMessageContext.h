@class NSString, IDSMessageContext;

@interface HDIDSMessageContext : NSObject {
    IDSMessageContext *_context;
}

@property (readonly, copy, nonatomic) NSString *originalGUID;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithMessageContext:(id)a0;

@end

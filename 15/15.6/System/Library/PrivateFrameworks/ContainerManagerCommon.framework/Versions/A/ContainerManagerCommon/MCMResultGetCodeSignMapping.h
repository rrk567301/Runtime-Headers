@class NSDictionary;

@interface MCMResultGetCodeSignMapping : MCMResultBase

@property (readonly, nonatomic) NSDictionary *info;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (char)encodeResultOntoReply:(id)a0;

@end

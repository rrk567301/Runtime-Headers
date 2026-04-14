@class NSDictionary;

@interface MCMResultGetCodeSignMapping : MCMResultBase

@property (readonly, nonatomic) NSDictionary *info;

- (BOOL)encodeResultOntoReply:(id)a0;
- (id)initWithInfo:(id)a0;
- (void).cxx_destruct;

@end

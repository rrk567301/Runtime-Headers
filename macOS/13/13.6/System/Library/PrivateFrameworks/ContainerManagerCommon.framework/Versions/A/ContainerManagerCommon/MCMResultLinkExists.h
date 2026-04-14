@interface MCMResultLinkExists : MCMResultBase

@property (readonly, nonatomic) BOOL exists;

- (id)initWithExists:(BOOL)a0;
- (BOOL)encodeResultOntoReply:(id)a0;

@end

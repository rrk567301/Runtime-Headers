@interface CTBServerMLSRCSContentWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::ServerMLSRCSContent> { union { char __null_state_; struct ServerMLSRCSContent { struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; char *__cap_; } fData; } __val_; } ; BOOL __engaged_; } wrapped;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWrapped:(struct optional<ctb::ServerMLSRCSContent> { union { char x0; struct ServerMLSRCSContent { struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; char *x2; } x0; } x1; } x0; BOOL x1; })a0;

@end

@interface CTBMLSFileTransferWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::MLSFileTransfer> { union { char __null_state_; struct MLSFileTransfer { struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct { char *__cap_; } ; } fFileInfoProto; } __val_; } ; BOOL __engaged_; } wrapped;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithWrapped:(struct optional<ctb::MLSFileTransfer> { union { char x0; struct MLSFileTransfer { struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct { char *x0; } x2; } x0; } x1; } x0; BOOL x1; })a0;

@end

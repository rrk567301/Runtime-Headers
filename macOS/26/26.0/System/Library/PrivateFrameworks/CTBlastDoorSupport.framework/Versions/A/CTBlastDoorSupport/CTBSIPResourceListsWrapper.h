@interface CTBSIPResourceListsWrapper : NSObject

@property (readonly, nonatomic) struct optional<ctb::SIPResourceLists> { union { char __null_state_; struct SIPResourceLists { struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; void *__cap_; } fParticipants; } __val_; } ; BOOL __engaged_; } wrapped;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWrapped:(struct optional<ctb::SIPResourceLists> { union { char x0; struct SIPResourceLists { struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; void *x2; } x0; } x1; } x0; BOOL x1; })a0;

@end

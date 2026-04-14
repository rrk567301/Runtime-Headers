@class NSArray, NSDictionary;

@interface CADSPLanguageV1Interpreter : NSObject {
    struct LegacyInterpreter { void /* function */ **_vptr$VirtuallyDestructible; struct stack<std::string, std::deque<std::string>> { struct deque<std::string, std::allocator<std::string>> { struct __split_buffer<std::string *, std::allocator<std::string *>> { void **__first_; void **__begin_; void **__end_; void **__cap_; } __map_; unsigned long long __start_; unsigned long long __size_; } c; } mSubsetNames; } _interpreter;
}

@property (copy, nonatomic) NSArray *preprocessorIncludePaths;
@property (copy, nonatomic) NSDictionary *preprocessorMacroDefinitions;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)interpretString:(id)a0 updating:(id)a1 error:(id *)a2;
- (BOOL)interpretContentsOfFile:(id)a0 updating:(id)a1 error:(id *)a2;
- (BOOL)interpretUTF8String:(const char *)a0 length:(unsigned long long)a1 updating:(id)a2 error:(id *)a3;

@end

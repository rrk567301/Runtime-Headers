@class NSString, NSURL;

@interface EMTSentencePieceProcessor : NSObject {
    struct unique_ptr<sentencepiece::SentencePieceProcessor, std::default_delete<sentencepiece::SentencePieceProcessor>> { struct { struct SentencePieceProcessor *__ptr_; } ; } _processor;
    NSURL *_modelURL;
}

@property (class, readonly, copy, nonatomic) NSString *spaceSymbol;

+ (struct vector<int, std::allocator<int>> { int *x0; int *x1; struct { int *x0; } x2; })cppIntVectorFromNSArray:(id)a0;
+ (struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; })cppStringFromNSString:(id)a0;
+ (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct { void *x0; } x2; })cppStringVectorFromNSArray:(id)a0;
+ (id)errorFromStatusString:(const void *)a0;
+ (id)nsStringFromCppString:(const void *)a0;
+ (id)sentencePieceTextFromCpp:(const void *)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)initWithModelURL:(id)a0 error:(id *)a1;
- (id)decodeIDs:(id)a0 error:(id *)a1;
- (id)decodePieces:(id)a0 error:(id *)a1;
- (id)encodeString:(id)a0 error:(id *)a1;

@end

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying>

@property (readonly, nonatomic) struct Token { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } tokenName; int tokenId; unsigned int startMilliseconds; unsigned int endMilliseconds; unsigned int silStartMilliSeconds; float confidence; BOOL hasSpaceAfter; BOOL hasSpaceBefore; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } phoneSeq; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *__value_; } __end_cap_; } phoneSeq_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } ipaPhoneSeq; struct vector<std::pair<std::string, float>, std::allocator<std::pair<std::string, float>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<std::string, float> *, std::allocator<std::pair<std::string, float>>> { void *__value_; } __end_cap_; } subwordConfidence; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } muxId; int lmeType; BOOL appendedAutoPunctuation; BOOL prependedAutoPunctuation; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } alternateTokenName; BOOL isModifiedByAutoPunctuation; struct DecodingSignals { float graphCost; float acousticCost; float acousticCostFirstPassCollapsed; float acousticCostSecondPassUnpushed; } decodingSignals; } quasarToken;
@property (readonly, copy, nonatomic) NSString *tokenName;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double end;
@property (readonly, nonatomic) double silenceStart;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) char hasSpaceAfter;
@property (readonly, nonatomic) char hasSpaceBefore;
@property (readonly, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) NSString *ipaPhoneSequence;
@property (readonly, nonatomic) char appendedAutoPunctuation;
@property (readonly, nonatomic) char prependedAutoPunctuation;
@property (readonly, nonatomic) char isModifiedByAutoPunctuation;
@property (readonly, nonatomic) double graphCost;
@property (readonly, nonatomic) double acousticCost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_initWithQuasarToken:(const void *)a0;
- (id)initWithTokenName:(id)a0 start:(double)a1 end:(double)a2 silenceStart:(double)a3 confidence:(double)a4 hasSpaceAfter:(char)a5 hasSpaceBefore:(char)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8;
- (id)initWithTokenName:(id)a0 start:(double)a1 end:(double)a2 silenceStart:(double)a3 confidence:(double)a4 hasSpaceAfter:(char)a5 hasSpaceBefore:(char)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8 appendedAutoPunctuation:(char)a9;

@end

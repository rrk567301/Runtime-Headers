@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying>

@property (readonly, nonatomic) struct Token { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } tokenName; int tokenId; unsigned int startMilliseconds; unsigned int endMilliseconds; unsigned int silStartMilliSeconds; float confidence; BOOL hasSpaceAfter; BOOL hasSpaceBefore; BOOL isEndOfSegment; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } phoneSeq; struct vector<std::string, std::allocator<std::string>> { void *__begin_; void *__end_; void *__cap_; } phoneSeq_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } ipaPhoneSeq; struct vector<std::pair<std::string, float>, std::allocator<std::pair<std::string, float>>> { void *__begin_; void *__end_; void *__cap_; } subwordConfidence; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } muxId; int lmeType; BOOL appendedAutoPunctuation; BOOL prependedAutoPunctuation; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } alternateTokenName; BOOL isModifiedByAutoPunctuation; struct DecodingSignals { float graphCost; float acousticCost; float acousticCostFirstPassCollapsed; float acousticCostSecondPassUnpushed; } decodingSignals; } quasarToken;
@property (readonly, copy, nonatomic) NSString *tokenName;
@property (readonly, nonatomic) double start;
@property (readonly, nonatomic) double end;
@property (readonly, nonatomic) double silenceStart;
@property (readonly, nonatomic) double confidence;
@property (readonly, nonatomic) BOOL hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasSpaceBefore;
@property (readonly, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) NSString *ipaPhoneSequence;
@property (readonly, nonatomic) BOOL appendedAutoPunctuation;
@property (readonly, nonatomic) BOOL prependedAutoPunctuation;
@property (readonly, nonatomic) BOOL isModifiedByAutoPunctuation;
@property (readonly, nonatomic) double graphCost;
@property (readonly, nonatomic) double acousticCost;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTokenName:(id)a0 start:(double)a1 end:(double)a2 silenceStart:(double)a3 confidence:(double)a4 hasSpaceAfter:(BOOL)a5 hasSpaceBefore:(BOOL)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8;
- (id)_initWithQuasarToken:(const void *)a0;
- (id)initWithTokenName:(id)a0 start:(double)a1 end:(double)a2 silenceStart:(double)a3 confidence:(double)a4 hasSpaceAfter:(BOOL)a5 hasSpaceBefore:(BOOL)a6 phoneSequence:(id)a7 ipaPhoneSequence:(id)a8 appendedAutoPunctuation:(BOOL)a9;

@end

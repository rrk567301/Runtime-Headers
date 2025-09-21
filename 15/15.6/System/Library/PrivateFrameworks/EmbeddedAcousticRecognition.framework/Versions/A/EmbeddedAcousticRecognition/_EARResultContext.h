@class NSDictionary, _EARSpeechRecognitionResultPackage;

@interface _EARResultContext : NSObject

@property (nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char __is_long_ : 1; unsigned char __size_ : 7; } ; char __padding_[0]; char __data_[23]; } __s; struct __long { struct { unsigned char __is_long_ : 1; unsigned long __cap_ : 63; } ; unsigned long long __size_; char *__data_; } __l; } __value_; } __r_; } prevBestRecogText;
@property (nonatomic) unsigned long long countOfIsFinalFalseAlreadyWritten;
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackage;
@property (retain, nonatomic) NSDictionary *prevMuxPackages;
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackageWithoutPersonalization;
@property (nonatomic) char anyResults;
@property (nonatomic) struct shared_ptr<EARContinuousListeningResultHelper> { struct EARContinuousListeningResultHelper *__ptr_; struct __shared_weak_count *__cntrl_; } continuousListeningResultHelper;
@property (readonly, nonatomic) struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void *__value_; } __end_cap_; } partialResults;
@property (readonly, nonatomic) unsigned long long partialResultIndexOffset;
@property (nonatomic) struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<quasar::Token> *, std::allocator<std::vector<quasar::Token>>> { void *__value_; } __end_cap_; } loggableConcatResult;
@property (nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct __compressed_pair<double *, std::allocator<double>> { double *__value_; } __end_cap_; } loggableConcatCosts;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addPartialResultToContext:(const void *)a0;
- (void)incrementCountOfIsFinalFalseAlreadyWritten;
- (void)resetPartialResultContext;
- (void)updateLoggableResultWithCurrentResult:(const void *)a0 currentCosts:(const void *)a1 startMilliseconds:(unsigned int)a2;

@end

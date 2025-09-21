@class NSDictionary, _EARSpeechRecognitionResultPackage;

@interface _EARResultContext : NSObject

@property (nonatomic) struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char __data_[23]; unsigned char __size_ : 7; unsigned char __is_long_ : 1; } __s; struct __long { char *__data_; unsigned long long __size_; unsigned long __cap_ : 63; unsigned char __is_long_ : 1; } __l; } __rep_; } prevBestRecogText;
@property (nonatomic) unsigned long long countOfIsFinalFalseAlreadyWritten;
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackage;
@property (retain, nonatomic) NSDictionary *prevMuxPackages;
@property (retain, nonatomic) _EARSpeechRecognitionResultPackage *prevPackageWithoutPersonalization;
@property (nonatomic) BOOL anyResults;
@property (nonatomic) struct shared_ptr<EARContinuousListeningResultHelper> { struct EARContinuousListeningResultHelper *__ptr_; struct __shared_weak_count *__cntrl_; } continuousListeningResultHelper;
@property (readonly, nonatomic) struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *__begin_; void *__end_; void *__cap_; } partialResults;
@property (readonly, nonatomic) unsigned long long partialResultIndexOffset;
@property (nonatomic) struct vector<std::vector<quasar::Token>, std::allocator<std::vector<quasar::Token>>> { void *__begin_; void *__end_; void *__cap_; } loggableConcatResult;
@property (nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; double *__cap_; } loggableConcatCosts;

- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPartialResultToContext:(const void *)a0;
- (void)incrementCountOfIsFinalFalseAlreadyWritten;
- (void)resetPartialResultContext;
- (void)updateLoggableResultWithCurrentResult:(const void *)a0 currentCosts:(const void *)a1 startMilliseconds:(unsigned int)a2;

@end

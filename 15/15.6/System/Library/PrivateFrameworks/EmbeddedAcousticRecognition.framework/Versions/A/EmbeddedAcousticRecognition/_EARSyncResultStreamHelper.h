@class NSArray, NSString, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface _EARSyncResultStreamHelper : NSObject <_EARSpeechRecognitionResultStream> {
    NSObject<OS_dispatch_semaphore> *_finishSemaphore;
}

@property (readonly, nonatomic) NSMutableArray *taggedResults;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)waitForCompletion;
- (id)addPartialFinalTag:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { union __rep { struct __short { struct { unsigned char x0 : 1; unsigned char x1 : 7; } x0; char x1[0]; char x2[23]; } x0; struct __long { struct { unsigned char x0 : 1; unsigned long x1 : 63; } x0; unsigned long long x1; char *x2; } x1; } x0; } x0; })a0 result:(id)a1;
- (id)initWithTagResults:(char)a0;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;

@end

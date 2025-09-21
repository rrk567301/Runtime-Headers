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
- (void)waitForCompletion;
- (void).cxx_destruct;
- (id)addPartialFinalTag:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; })a0 result:(id)a1;
- (id)initWithTagResults:(BOOL)a0;
- (void)speechRecognizer:(id)a0 didFinishRecognitionWithError:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizeFinalResults:(id)a1;
- (void)speechRecognizer:(id)a0 didRecognizePartialResult:(id)a1;

@end

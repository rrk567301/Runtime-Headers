@class NSArray, NSString;
@protocol NSSpeechRecognizerDelegate;

@interface NSSpeechRecognizer : NSObject {
    id _privateNSSpeechRecognizerVars;
}

@property (weak) id<NSSpeechRecognizerDelegate> delegate;
@property (copy) NSArray *commands;
@property (copy) NSString *displayedCommandsTitle;
@property BOOL listensInForegroundOnly;
@property BOOL blocksOtherRecognizers;

- (void)startListening;
- (void)stopListening;
- (id)init;
- (void)dealloc;
- (void)_processRecognitionResult:(struct __RXLanguageObject { } *)a0;
- (void)_updateCommandDisplayWithRecognizer;

@end

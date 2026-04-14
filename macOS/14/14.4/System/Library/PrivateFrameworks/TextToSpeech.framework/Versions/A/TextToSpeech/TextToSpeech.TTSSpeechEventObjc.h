@interface TextToSpeech.TTSSpeechEventObjc : NSObject {
    void /* unknown type, empty encoding */ wrappedEvent;
}

+ (id)makePause;
+ (id)makePlayedFirstBuffer;
+ (id)makeReceivedStart;
+ (id)makeReceivedStop;
+ (id)makeRecievedFirstBuffer;
+ (id)makeResume;
+ (id)makeStop;
+ (id)makeWithCheckpoint:(id)a0;
+ (id)makeWithFinished:(BOOL)a0;
+ (id)makeWithMarkerConversion:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 to:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)makeWithMarkerRecieved:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
+ (id)makeWithMarkupConversion:(id)a0 to:(id)a1;
+ (id)makeWithOtherRewrite:(id)a0 from:(id)a1 to:(id)a2;
+ (id)makeWithRuleRewrite:(id)a0 replacement:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 identifier:(id)a3;
+ (id)makeWithStart:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end

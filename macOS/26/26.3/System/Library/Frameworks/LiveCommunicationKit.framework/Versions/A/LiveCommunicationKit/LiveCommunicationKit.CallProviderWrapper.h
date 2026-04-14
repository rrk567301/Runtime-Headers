@interface LiveCommunicationKit.CallProviderWrapper : NSObject <CXProviderDelegate> {
    void /* unknown type, empty encoding */ onProviderDidReset;
    void /* unknown type, empty encoding */ onProviderDidBegin;
    void /* unknown type, empty encoding */ onProviderDidActivateAudioSession;
    void /* unknown type, empty encoding */ onProviderDidDeactivateAudioSession;
    void /* unknown type, empty encoding */ onProviderTimedOutPerformingAction;
    void /* unknown type, empty encoding */ onProviderPerformAction;
    void /* unknown type, empty encoding */ onProviderPerformStartCallAction;
    void /* unknown type, empty encoding */ onProviderPerformAnswerCallAction;
    void /* unknown type, empty encoding */ onProviderPerformEndCallAction;
    void /* unknown type, empty encoding */ onProviderPerformSetHeldCallAction;
    void /* unknown type, empty encoding */ onProviderPerformSetMutedCallAction;
    void /* unknown type, empty encoding */ onProviderPerformSetGroupCallAction;
    void /* unknown type, empty encoding */ onProviderPerformPlayDTMFCallAction;
    void /* unknown type, empty encoding */ onProviderPerformShareIdentityCallAction;
}

- (id)init;
- (void).cxx_destruct;
- (void)provider:(id)a0 didActivateAudioSession:(id)a1;
- (void)provider:(id)a0 didDeactivateAudioSession:(id)a1;
- (void)provider:(id)a0 performAnswerCallAction:(id)a1;
- (void)provider:(id)a0 performEndCallAction:(id)a1;
- (void)provider:(id)a0 performPlayDTMFCallAction:(id)a1;
- (void)provider:(id)a0 performSetGroupCallAction:(id)a1;
- (void)provider:(id)a0 performSetHeldCallAction:(id)a1;
- (void)provider:(id)a0 performSetMutedCallAction:(id)a1;
- (void)provider:(id)a0 performStartCallAction:(id)a1;
- (void)provider:(id)a0 timedOutPerformingAction:(id)a1;
- (void)providerDidBegin:(id)a0;
- (void)providerDidReset:(id)a0;

@end

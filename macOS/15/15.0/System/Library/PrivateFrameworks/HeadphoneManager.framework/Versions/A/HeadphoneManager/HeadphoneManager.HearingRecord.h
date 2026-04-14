@class NSString;

@interface HeadphoneManager.HearingRecord : NSObject {
    void /* unknown type, empty encoding */ deviceRemoteSendState;
    void /* unknown type, empty encoding */ _pmeVoiceEnabled;
    void /* unknown type, empty encoding */ _pmeMediaEnabled;
    void /* unknown type, empty encoding */ _listeningModeOffAllowed;
    void /* unknown type, empty encoding */ _bluetoothAddress;
    void /* unknown type, empty encoding */ _bluetoothUUID;
    void /* unknown type, empty encoding */ deviceRecord;
}

@property (nonatomic) char pmeVoiceEnabled;
@property (nonatomic) char pmeMediaEnabled;
@property (nonatomic) char listeningModeOffAllowed;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;

@end

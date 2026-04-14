@class ATAudioSessionClientImpl;

@interface ATAudioSessionPropertyManager : NSObject {
    ATAudioSessionClientImpl *mAsClientImpl;
}

- (void).cxx_destruct;
- (int)SetProperty:(unsigned int)a0 size:(unsigned int)a1 data:(const void *)a2;
- (id)initWithATAudioSessionClientImpl:(id)a0;
- (int)GetProperty:(unsigned int)a0 size:(unsigned int *)a1 data:(void *)a2;

@end

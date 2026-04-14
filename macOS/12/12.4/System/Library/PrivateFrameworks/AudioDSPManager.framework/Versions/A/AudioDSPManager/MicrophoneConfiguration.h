@class NSString, AVAudioFormat;

@interface MicrophoneConfiguration : NSObject <AVAudioMicrophoneConfiguration>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *location;
@property (retain, nonatomic) NSString *orientation;
@property (retain, nonatomic) NSString *polarPattern;
@property (retain, nonatomic) AVAudioFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 location:(id)a1 orientation:(id)a2 polarPattern:(id)a3 channelCount:(int)a4;

@end

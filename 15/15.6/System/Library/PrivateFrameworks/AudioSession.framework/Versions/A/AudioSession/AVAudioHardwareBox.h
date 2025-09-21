@class NSString, NSArray;

@interface AVAudioHardwareBox : AVAudioHardwareObject

@property (readonly, nonatomic) NSString *UID;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) char hasAudio;
@property (readonly, nonatomic) char hasVideo;
@property (readonly, nonatomic) char hasMIDI;
@property (readonly, nonatomic) char requiresAuthentication;
@property (readonly, nonatomic, getter=isAcquired) char acquired;
@property (readonly, nonatomic) unsigned long long acquistionStatus;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *clocks;
@property (readonly, nonatomic) NSArray *controls;

@end

@class NSArray, AVAudioHardwareObject;

@interface AVAudioHardwareObjectChangeEvent : NSObject

@property (retain, nonatomic) AVAudioHardwareObject *changedObject;
@property (retain, nonatomic) NSArray *namedProperties;
@property (retain, nonatomic) NSArray *customProperties;

- (void).cxx_destruct;
- (id)init;

@end

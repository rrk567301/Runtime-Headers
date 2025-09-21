@class NSString;

@interface AXSSAudioDevice : NSObject

@property (nonatomic) unsigned int audioDeviceID;
@property (nonatomic) char isInputDevice;
@property (nonatomic) char isBuiltInAudio;
@property (retain, nonatomic) NSString *deviceUID;
@property (retain, nonatomic) NSString *manufacturer;
@property (nonatomic) char supportsInput;
@property (nonatomic) char supportsOutput;
@property (nonatomic) char canBeDefault;
@property (retain, nonatomic) NSString *prevSourceName;

- (void).cxx_destruct;
- (char)getProperty:(unsigned int)a0 forChannel:(unsigned int)a1 dataSize:(unsigned int)a2 dataPtr:(void *)a3;
- (id)getStringProperty:(unsigned int)a0 forChannel:(unsigned int)a1;
- (id)initForSection:(char)a0 ofAudioDevice:(unsigned int)a1;
- (id)initWithAudioDevice:(unsigned int)a0;

@end

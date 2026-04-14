@class NSString;

@interface CBLEAudioHearingAidPreset : NSObject

@property (readonly, nonatomic) unsigned char presetIndex;
@property (readonly, retain, nonatomic) NSString *presetName;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) BOOL isAvailable;

- (void).cxx_destruct;
- (id)initWithValues:(unsigned char)a0 withProperty:(unsigned char)a1 withName:(id)a2;

@end

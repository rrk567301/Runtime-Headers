@class NSString;

@interface AVVCAggregateDevice : NSObject {
    unsigned int mAOPAudioDeviceID;
}

@property (readonly) unsigned int aggregateDeviceID;
@property (readonly) NSString *aggregateDeviceUID;

+ (id)sharedAggregateDevice;
+ (BOOL)IsAOPDevicePresent;
+ (unsigned int)GetAOPDeviceID:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)GetBuiltinSpeakerDevice;
- (struct __CFDictionary { } *)CreateDictionaryForDevice:(unsigned int)a0 enableTap:(BOOL)a1;
- (int)DestroyAggregateDevice;
- (int)BuildAggregateDevice;

@end

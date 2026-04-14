@interface MXHALEndpointManager : NSObject {
    BOOL mAOPDevicePresent;
    BOOL mHALServerDied;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)copyName:(unsigned int)a0;
- (id)initInternal;
- (id)copyDictionaryForDevice:(unsigned int)a0 enableTapStream:(BOOL)a1;
- (unsigned int)getAudioDeviceForUID:(struct __CFString { } *)a0;
- (unsigned int)getBuiltInSpeakerDeviceID;
- (unsigned int)getCurrentDataSourceID:(unsigned int)a0 channel:(unsigned int)a1 deviceID:(unsigned int)a2;
- (unsigned int)getNumberOfChannels:(unsigned int)a0 isUsingInput:(BOOL)a1;
- (unsigned int)getNumberStreams:(unsigned int)a0 isUsingInput:(BOOL)a1;
- (unsigned int)getPropertyDataSize:(struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 deviceID:(unsigned int)a1 qualifierDataSize:(unsigned int)a2 qualifierData:(void *)a3;
- (BOOL)hasDataSourceControl:(unsigned int)a0 channel:(unsigned int)a1 deviceID:(unsigned int)a2;
- (BOOL)isAlive:(unsigned int)a0;

@end

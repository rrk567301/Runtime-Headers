@class NSString, NSArray, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ASDBox : ASDObject {
    NSMutableArray *_audioDevices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSString *_boxName;
    char _acquired;
    int _acquisitionFailure;
    char _identify;
    NSObject<OS_dispatch_queue> *_acquireQueue;
}

@property (copy, nonatomic) NSString *boxName;
@property (readonly, copy, nonatomic) NSString *boxUID;
@property (copy, nonatomic) NSString *modelUID;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *firmwareVersion;
@property (nonatomic) char hasVideo;
@property (nonatomic) char hasAudio;
@property (nonatomic) char hasMIDI;
@property (nonatomic) char requiresAuthentication;
@property (nonatomic) char supportsIdentify;
@property (nonatomic) char canSetIdentify;
@property (nonatomic, getter=isAcquireable) char acquireable;
@property (nonatomic, getter=isAcquirable) char acquirable;
@property (nonatomic) char canChangeBoxName;
@property (nonatomic) char acquired;
@property (nonatomic) int acquisitionFailure;
@property (nonatomic) char identify;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *acquireQueue;
@property (readonly, retain, nonatomic) NSArray *devices;
@property (readonly, retain, nonatomic) NSArray *audioDevices;
@property (readonly, retain, nonatomic) NSMutableArray *clockDevices;

+ (id)keyPathsForValuesAffectingAcquireable;

- (void).cxx_destruct;
- (id)devices;
- (unsigned int)objectClass;
- (unsigned int)transportType;
- (void)systemWillSleep;
- (char)hasProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (char)isPropertySettable:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0;
- (void)addAudioDevice:(id)a0;
- (void)removeAudioDevice:(id)a0;
- (void)addDevice:(id)a0;
- (void)removeDevice:(id)a0;
- (id)initWithPlugin:(id)a0;
- (char)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (void)systemHasPoweredOn;
- (void)addClockDevice:(id)a0;
- (id)boxName;
- (id)driverClassName;
- (void)setAcquireable:(char)a0;
- (char)acquireBox:(char)a0 fromHAL:(char)a1;
- (id)acquireQueue;
- (void)addDevicesToPlugin;
- (char)changeBoxName:(id)a0;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(char)a1;
- (void)identifyBox:(char)a0;
- (id)initWithBoxUID:(id)a0 withPlugin:(id)a1;
- (void)removeAllAudioDevices;
- (void)removeAllClockDevices;
- (void)removeAllDevices;
- (void)removeClockDevice:(id)a0;
- (void)removeDevicesFromPlugin;
- (void)setBoxName:(id)a0;
- (char)setProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int)a3 andData:(const void *)a4 forClient:(int)a5;

@end

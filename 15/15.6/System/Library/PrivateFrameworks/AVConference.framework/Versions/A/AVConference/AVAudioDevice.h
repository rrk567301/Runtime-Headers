@class NSString, NSNumber;

@interface AVAudioDevice : NSObject {
    char _isBluetoothDevice;
    char _isLineIn;
}

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *UID;
@property (readonly, nonatomic) char inputAvailable;
@property (readonly, nonatomic) char outputAvailable;
@property (readonly, nonatomic, getter=isPreferredDevice) char preferredDevice;
@property (readonly, nonatomic) char isBluetoothDevice;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDeviceID:(id)a0;
- (char)isBuiltInDevice;
- (unsigned int *)allocDeviceControlListAndSize:(unsigned int *)a0;
- (char)copyStreamIDArray:(unsigned int **)a0 length:(unsigned int *)a1;
- (void)createName;
- (void)createNameForScope:(unsigned int)a0;
- (void)createUID;
- (char)deviceHasNonTapStreamsInStreamList:(unsigned int *)a0 length:(unsigned int)a1;
- (unsigned int)getDataSourceControlID;
- (char)hasRealInputStream;
- (char)isAggregableDevice;
- (char)isSomethingConnectedToJack;
- (char)isStreamAvailableForScope:(unsigned int)a0;
- (char)isValidDevice;
- (char)isValidInputDevice;
- (id)newAudioObjectStringPropertyWithSelector:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;

@end

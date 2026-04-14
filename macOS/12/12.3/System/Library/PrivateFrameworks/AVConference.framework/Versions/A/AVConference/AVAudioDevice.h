@class NSString, NSNumber;

@interface AVAudioDevice : NSObject {
    BOOL _isBluetoothDevice;
    BOOL _isLineIn;
}

@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *UID;
@property (readonly, nonatomic) BOOL inputAvailable;
@property (readonly, nonatomic) BOOL outputAvailable;
@property (readonly, nonatomic, getter=isPreferredDevice) BOOL preferredDevice;
@property (readonly, nonatomic) BOOL isBluetoothDevice;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDeviceID:(id)a0;
- (void)createName;
- (BOOL)isStreamAvailableForScope:(unsigned int)a0;
- (void)createNameForScope:(unsigned int)a0;
- (void)createUID;
- (id)newAudioObjectStringPropertyWithSelector:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
- (BOOL)copyStreamIDArray:(unsigned int **)a0 length:(unsigned int *)a1;
- (BOOL)deviceHasNonTapStreamsInStreamList:(unsigned int *)a0 length:(unsigned int)a1;
- (BOOL)hasRealInputStream;
- (BOOL)isAggregableDevice;
- (BOOL)isSomethingConnectedToJack;
- (unsigned int *)allocDeviceControlListAndSize:(unsigned int *)a0;
- (BOOL)isDeviceInEar:(id)a0;
- (BOOL)isValidDevice;
- (BOOL)isValidInputDevice;
- (BOOL)isBuiltInDevice;
- (unsigned int)getDataSourceControlID;

@end

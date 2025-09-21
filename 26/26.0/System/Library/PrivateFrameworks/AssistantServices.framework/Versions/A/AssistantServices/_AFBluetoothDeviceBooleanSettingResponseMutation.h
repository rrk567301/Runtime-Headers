@class NSString, AFBluetoothDeviceBooleanSettingResponse;

@interface _AFBluetoothDeviceBooleanSettingResponseMutation : NSObject <AFBluetoothDeviceBooleanSettingResponseMutating> {
    AFBluetoothDeviceBooleanSettingResponse *_base;
    long long _value;
    long long _status;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasValue : 1; unsigned char hasStatus : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (void)setValue:(long long)a0;
- (BOOL)isDirty;
- (long long)getValue;
- (void)setStatus:(long long)a0;
- (void).cxx_destruct;
- (long long)getStatus;

@end

@class NSString, HDProfile;

@interface HDWristTemperatureIdentifierManager : NSObject <HDDataObserver> {
    HDProfile *_profile;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)_mapSerialNumberToLocalDeviceSource;

@end

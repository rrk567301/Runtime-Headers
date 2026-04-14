@class NSArray, VolumeLevel;

@interface SetVolumeLevelIntent : INIntent

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic, retain) VolumeLevel *volumeLevel;
@property (nonatomic) long long settingAttribute;
@property (nonatomic, copy) NSArray *deviceQueries;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

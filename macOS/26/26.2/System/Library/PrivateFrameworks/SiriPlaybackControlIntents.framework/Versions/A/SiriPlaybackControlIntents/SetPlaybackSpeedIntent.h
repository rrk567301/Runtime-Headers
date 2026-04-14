@class NSArray;

@interface SetPlaybackSpeedIntent : INIntent

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, copy) NSArray *deviceContext;
@property (nonatomic) long long mediaType;
@property (nonatomic, copy) NSArray *deviceQueries;
@property (nonatomic) double speedMagnitude;
@property (nonatomic) long long playbackSpeedType;
@property (nonatomic) long long requestedPlaybackSpeedUnit;

+ (BOOL)shouldSkipDefaultSchemaCheck;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;

@end

@interface WFLocationParameter : WFParameter

@property (readonly, nonatomic) char defaultToCurrentLocation;
@property (readonly, nonatomic) char allowsTextOnlyLocations;
@property (readonly, nonatomic) char allowsCurrentLocation;
@property (readonly, nonatomic) char skipsProcessingCurrentLocation;
@property (readonly, nonatomic) double currentLocationAccuracy;

- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (Class)singleStateClass;

@end

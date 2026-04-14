@class NSString;

@interface MGMediaSystem : MGGroup <MGAirPlayMetadataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)type;
+ (id)predicateForCurrentDevice;
+ (id)predicateForType;
+ (id)predicateForMediaSystem;

@end

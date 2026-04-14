@class NSData, NSNumber;

@interface MTRThermostatClusterQueuedPresetStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSData *presetHandle;
@property (copy, nonatomic) NSNumber *transitionTimestamp;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

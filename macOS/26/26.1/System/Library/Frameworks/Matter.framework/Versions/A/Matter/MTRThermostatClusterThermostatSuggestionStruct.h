@class NSNumber, NSData;

@interface MTRThermostatClusterThermostatSuggestionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *uniqueID;
@property (copy, nonatomic) NSData *presetHandle;
@property (copy, nonatomic) NSNumber *effectiveTime;
@property (copy, nonatomic) NSNumber *expirationTime;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

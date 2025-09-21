@class NSNumber, NSData;

@interface MTRThermostatClusterThermostatSuggestionStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *uniqueID;
@property (copy, nonatomic) NSData *presetHandle;
@property (copy, nonatomic) NSNumber *effectiveTime;
@property (copy, nonatomic) NSNumber *expirationTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

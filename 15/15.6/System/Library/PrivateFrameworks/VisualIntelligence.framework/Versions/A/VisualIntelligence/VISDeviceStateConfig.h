@class NSData, NSString;

@interface VISDeviceStateConfig : PBCodable <VISDeviceStateConfig, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) int frame_count;
@property (nonatomic) float anchor_depth;
@property (nonatomic) char set_zero_state_as_stable;
@property (nonatomic) float camera_small_movement_threshold;
@property (nonatomic) float camera_large_movement_threshold;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;

@end

@class NSDictionary;

@interface PKPassTileStateMetadataVehicleFunction : PKPassTileStateMetadata

@property (copy, nonatomic) NSDictionary *vehicleFunctionStates;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_setUpWithDictionary:(id)a0;
- (BOOL)isEqualToUnresolvedMetadata:(id)a0;

@end

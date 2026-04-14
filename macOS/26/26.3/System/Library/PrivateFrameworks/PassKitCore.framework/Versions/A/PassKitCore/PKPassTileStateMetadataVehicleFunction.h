@class NSDictionary;

@interface PKPassTileStateMetadataVehicleFunction : PKPassTileStateMetadata

@property (copy, nonatomic) NSDictionary *vehicleFunctionStates;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (BOOL)isEqualToUnresolvedMetadata:(id)a0;

@end

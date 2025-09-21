@class NSDictionary;

@interface PKPassTileStateMetadataVehicleFunction : PKPassTileStateMetadata

@property (copy, nonatomic) NSDictionary *vehicleFunctionStates;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (BOOL)isEqualToUnresolvedMetadata:(id)a0;

@end

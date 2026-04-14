@class NSArray;

@interface PKPassTileMetadataVehicleFunction : PKPassTileMetadata

@property (copy, nonatomic) NSArray *vehicleFunctions;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_setUpWithDictionary:(id)a0 privateDictionary:(id)a1;

@end

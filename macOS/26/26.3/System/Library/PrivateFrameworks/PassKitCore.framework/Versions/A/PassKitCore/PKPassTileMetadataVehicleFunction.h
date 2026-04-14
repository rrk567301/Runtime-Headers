@class NSArray;

@interface PKPassTileMetadataVehicleFunction : PKPassTileMetadata

@property (copy, nonatomic) NSArray *vehicleFunctions;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0 privateDictionary:(id)a1;

@end

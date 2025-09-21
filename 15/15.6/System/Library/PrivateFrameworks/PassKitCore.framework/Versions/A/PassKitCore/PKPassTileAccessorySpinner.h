@interface PKPassTileAccessorySpinner : PKPassTileAccessory

@property (nonatomic, getter=isSpinnerEnabled) BOOL spinnerEnabled;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedAccessoryWithBundle:(id)a0 privateBundle:(id)a1;

@end

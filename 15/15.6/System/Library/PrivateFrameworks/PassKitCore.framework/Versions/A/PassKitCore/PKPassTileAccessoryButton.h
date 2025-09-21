@class NSString;

@interface PKPassTileAccessoryButton : PKPassTileAccessory

@property (copy, nonatomic) NSString *title;
@property (nonatomic, getter=isSpinnerEnabled) BOOL spinnerEnabled;

+ (char)supportsSecureCoding;
+ (id)createWithTitle:(id)a0 spinnerEnabled:(BOOL)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedAccessoryWithBundle:(id)a0 privateBundle:(id)a1;

@end

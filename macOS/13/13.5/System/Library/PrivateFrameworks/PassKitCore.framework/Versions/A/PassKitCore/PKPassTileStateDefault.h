@class NSString, PKPassTileAccessory;

@interface PKPassTileStateDefault : PKPassTileState

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) PKPassTileAccessory *accessory;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_setupWithDictionary:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end

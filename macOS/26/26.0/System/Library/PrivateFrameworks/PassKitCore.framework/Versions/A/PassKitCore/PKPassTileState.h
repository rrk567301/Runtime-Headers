@class PKPassTileStateDefault, NSArray, PKPassTileStateGroup, PKPassTileStateForeignView, PKPassTileStateMetadata, PKPassTileStateDefaultV2, PKPassTileStateCheckIn, PKPassTileImage, PKPaymentPassAction, PKPassTileStatePaymentOfferSelector;

@interface PKPassTileState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileStatePaymentOfferSelector *stateTypePaymentOfferSelector;
@property (readonly, nonatomic) PKPassTileStateForeignView *stateTypeForeignView;
@property (readonly, nonatomic) PKPassTileStateGroup *stateTypeGroup;
@property (readonly, nonatomic) PKPassTileStateCheckIn *stateTypeCheckIn;
@property (readonly, nonatomic) PKPassTileStateDefaultV2 *stateTypeDefaultV2;
@property (readonly, nonatomic) PKPassTileStateDefault *stateTypeDefault;
@property (retain, nonatomic) PKPassTileStateMetadata *metadata;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (retain, nonatomic) PKPassTileState *actionState;
@property (retain, nonatomic) PKPassTileImage *icon;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic, getter=isFullBleed) BOOL fullBleed;
@property (nonatomic) BOOL hidesBackground;
@property (copy, nonatomic) NSArray *actionDictionaries;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic) PKPaymentPassAction *action;

+ (id)_createForDictionary:(id)a0 withTileType:(long long)a1;
+ (id)_createWithType:(long long)a0;
+ (id)createResolvedStateWithType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;

@end

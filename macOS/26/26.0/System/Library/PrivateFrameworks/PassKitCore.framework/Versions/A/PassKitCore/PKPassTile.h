@class PKPassTileState, NSArray, PKPassTileMetadata, NSString;

@interface PKPassTile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *tiles;
@property (readonly, nonatomic) PKPassTileMetadata *metadata;
@property (readonly, nonatomic) NSString *stateIdentifier;
@property (readonly, nonatomic) PKPassTileState *state;
@property (readonly, nonatomic, getter=isInProgress) BOOL inProgress;
@property (copy, nonatomic) NSString *axID;
@property (copy, nonatomic) NSString *analyticsIdentifier;

+ (id)_createDefaultDashboardGroupTileWithChildTiles:(id)a0;
+ (id)createTileRowsForTiles:(id)a0 forceCompact:(BOOL)a1 maximumRows:(unsigned long long)a2 maximumColumns:(unsigned long long)a3;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithMetadata:(id)a0 childTiles:(id)a1 stateIdentifier:(id)a2 state:(id)a3 inProgress:(BOOL)a4;
- (BOOL)isGroupTile;
- (id)maximumRows;
- (id)prearmTiles;
- (BOOL)supportsPaymentPassAction:(id)a0;

@end

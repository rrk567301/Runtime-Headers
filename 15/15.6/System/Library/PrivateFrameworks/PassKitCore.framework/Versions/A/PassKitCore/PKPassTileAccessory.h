@class PKPassTileAccessoryImage, PKPassTileAccessorySpinner, PKPassTileAccessoryButton;

@interface PKPassTileAccessory : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) PKPassTileAccessoryImage *accessoryTypeImage;
@property (readonly, nonatomic) PKPassTileAccessorySpinner *accessoryTypeSpinner;
@property (readonly, nonatomic) PKPassTileAccessoryButton *accessoryTypeButton;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;

+ (id)_createForDictionary:(id)a0;
+ (id)_createForType:(long long)a0 resolved:(BOOL)a1;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedAccessoryWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedAccessory:(id)a0;

@end

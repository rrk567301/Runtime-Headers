@interface CAWindowServerDisplayManager : NSObject

- (void)dealloc;
- (id)availableDisplayWallGroups;
- (char)disableDisplayWallConfigurationWithDisplay:(id)a0;
- (char)enableDisplayWallWithConfiguration:(id)a0;
- (char)isDisplayWallWithDisplayEnabled:(id)a0;
- (char)validateDisplayWallConfiguration:(id)a0;
- (id)_initWithDisplays:(id)a0;

@end

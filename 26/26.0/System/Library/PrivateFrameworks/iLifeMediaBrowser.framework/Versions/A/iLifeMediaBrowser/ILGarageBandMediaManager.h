@interface ILGarageBandMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)_init;
- (id)init;
- (void)_durationOfGBProjectAtPath:(id)a0;
- (id)garageBandApplicationVersion;
- (id)garageBandFolders;

@end

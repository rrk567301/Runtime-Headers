@interface ILGarageBandMediaManager : ILMediaManager

+ (id)sharedMediaManager;

- (id)init;
- (id)_init;
- (id)garageBandApplicationVersion;
- (id)garageBandFolders;
- (void)_durationOfGBProjectAtPath:(id)a0;

@end

@interface SFCollaborationUserDefaults : NSObject

+ (id)sharedDefaults;

- (id)existingCollaborativeModeForContentIdentifier:(id)a0;
- (void)setCollaborativeMode:(char)a0 contentIdentifier:(id)a1;

@end

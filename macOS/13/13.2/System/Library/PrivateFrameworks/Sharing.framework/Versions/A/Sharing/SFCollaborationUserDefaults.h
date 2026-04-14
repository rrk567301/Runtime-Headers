@interface SFCollaborationUserDefaults : NSObject

+ (id)sharedDefaults;

- (void)setCollaborativeMode:(BOOL)a0 contentIdentifier:(id)a1;
- (id)existingCollaborativeModeForContentIdentifier:(id)a0;

@end

@interface NotesShared.ICAttachmentSystemPaperModelHelper : NSObject

+ (BOOL)canDisplayPaperAtURL:(id)a0;
+ (BOOL)canDisplayPaperOnDawnA:(id)a0;
+ (BOOL)canDisplayPaperOnPreSydneyAtURL:(id)a0;
+ (BOOL)canDisplayPaperOnSydneyAAtURL:(id)a0;
+ (BOOL)canDisplayPaperOnSydneyBAtURL:(id)a0;
+ (long long)minimumSupportedNotesVersionForPaperAtURL:(id)a0 greaterOrEqualToVersion:(long long)a1;

- (id)init;

@end

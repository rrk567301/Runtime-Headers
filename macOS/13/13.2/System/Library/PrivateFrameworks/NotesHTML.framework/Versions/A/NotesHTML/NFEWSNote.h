@class NFEWSFolder, NSString;

@interface NFEWSNote : NFNote

@property (retain, nonatomic) NFEWSFolder *folder;
@property (copy, nonatomic) NSString *changeKey;

+ (BOOL)supportsAttachments;
+ (id)notesWithItemIdStrings:(id)a0 context:(id)a1;
+ (id)noteWithTitle:(id)a0 hash:(id)a1 context:(id)a2;
+ (id)createNoteWithItemIdString:(id)a0 context:(id)a1;

- (id)identifier;
- (BOOL)isRemote;
- (id)createAttachmentWithName:(id)a0;
- (id)activityDictionary;
- (BOOL)validateFolder:(inout id *)a0 error:(out id *)a1;
- (id)_calculateHashForNoteBody;
- (BOOL)bodyMatchesHash:(id)a0;
- (id)_sha1Hash:(id)a0;
- (id)_simplifiedStringFromString:(id)a0 isXML:(BOOL)a1;

@end

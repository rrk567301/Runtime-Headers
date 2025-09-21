@class NFEWSFolder, NSString;

@interface NFEWSNote : NFNote

@property (retain, nonatomic) NFEWSFolder *folder;
@property (copy, nonatomic) NSString *changeKey;

+ (char)supportsAttachments;
+ (id)notesWithItemIdStrings:(id)a0 context:(id)a1;
+ (id)createNoteWithItemIdString:(id)a0 context:(id)a1;
+ (id)noteWithTitle:(id)a0 hash:(id)a1 context:(id)a2;

- (id)identifier;
- (char)isRemote;
- (id)createAttachmentWithName:(id)a0;
- (id)_calculateHashForNoteBody;
- (id)_sha1Hash:(id)a0;
- (id)_simplifiedStringFromString:(id)a0 isXML:(char)a1;
- (id)activityDictionary;
- (char)bodyMatchesHash:(id)a0;
- (char)validateFolder:(inout id *)a0 error:(out id *)a1;

@end

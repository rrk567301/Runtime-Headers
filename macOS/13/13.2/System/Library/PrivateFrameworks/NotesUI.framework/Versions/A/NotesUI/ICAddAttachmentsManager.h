@interface ICAddAttachmentsManager : NSObject

+ (id)sharedManager;

- (id)saveAttachmentsToNewNote:(id)a0 inFolder:(id)a1 isSystemPaper:(BOOL)a2 textBefore:(id)a3 textAfter:(id)a4;
- (unsigned int)styleForTitleLength:(long long)a0;
- (void)saveAttachments:(id)a0 toNote:(id)a1 textBefore:(id)a2 textAfter:(id)a3;
- (void)saveAttachments:(id)a0 toNote:(id)a1 textBefore:(id)a2 textAfter:(id)a3 fetchFirst:(BOOL)a4;

@end

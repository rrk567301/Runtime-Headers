@class ICNote, NSMutableDictionary, ICTTTextEditFilter;

@interface ICTTTextEditGrouper : NSObject

@property (readonly, nonatomic) NSMutableDictionary *userIDForReplicaID;
@property (readonly, nonatomic) NSMutableDictionary *trustsTimestampsFromReplicaID;
@property (readonly, nonatomic) NSMutableDictionary *checkmarkReplicaIDForUserID;
@property (readonly, nonatomic) ICNote *note;
@property (copy, nonatomic) ICTTTextEditFilter *filter;
@property (nonatomic) char includesTableEdits;
@property (nonatomic) char includesCheckmarkEdits;
@property (nonatomic) char joinsTextGaps;
@property (nonatomic) char joinsWhitespaceAndNewlineGaps;

- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (id)editGroupForEdits:(id)a0 userID:(id)a1 inAttributedString:(id)a2;
- (id)editsByAddingAllowedAttachmentEditsToEdit:(id)a0 inAttributedString:(id)a1;
- (id)editsByAddingCheckmarkEditsToEdit:(id)a0 inAttributedString:(id)a1;
- (id)editsByAddingTableEditsToEdit:(id)a0 inAttributedString:(id)a1;
- (id)filteredEditForEdit:(id)a0 inAttributedString:(id)a1;
- (id)groupedEdits;
- (id)groupedEditsForEdits:(id)a0 inAttributedString:(id)a1;
- (id)latestTimestampForEdits:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForEdits:(id)a0;
- (char)trustsTimestampsFromReplicaID:(id)a0;
- (id)userIDForReplicaID:(id)a0;

@end

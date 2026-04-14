@class WBTabGroup, NSString, NSURL, WBSCRDTPosition, WBLocalTabAttributes;

@interface WBMutableTab : WBTab <NSCopying>

@property (nonatomic, getter=wasModified) BOOL modified;
@property (nonatomic, getter=wasAdded) BOOL added;
@property (nonatomic, getter=wasMoved) BOOL moved;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (nonatomic) int orderIndex;
@property (retain, nonatomic) WBLocalTabAttributes *localAttributes;
@property (weak, nonatomic) WBTabGroup *tabGroup;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSURL *syncableURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) NSString *syncableTitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTitle:(id)a0;
- (void)setUrl:(id)a0;
- (void)setModified:(BOOL)a0;
- (void)setAdded:(BOOL)a0;
- (void)setOrderIndex:(int)a0;
- (void)setPinned:(BOOL)a0 title:(id)a1 url:(id)a2;
- (void)markAsRead;
- (void)setSyncableURL:(id)a0;
- (void)setLocalAttributes:(id)a0;
- (void)setTabGroup:(id)a0;
- (void)setSyncable:(BOOL)a0;
- (void)markClean;
- (void)setSyncPosition:(id)a0;
- (void)setMoved:(BOOL)a0;
- (void)setURL:(id)a0 shouldSync:(BOOL)a1;
- (void)adoptAttributesFromTab:(id)a0;
- (void)mergeWithTab:(id)a0;

@end

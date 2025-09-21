@class NSString, NSURL, WBSCRDTPosition, WBLocalTabAttributes;

@interface WBMutableTab : WBTab <NSCopying>

@property (nonatomic, getter=wasModified) char modified;
@property (nonatomic, getter=wasAdded) char added;
@property (nonatomic, getter=wasMoved) char moved;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (nonatomic) int orderIndex;
@property (retain, nonatomic) WBLocalTabAttributes *localAttributes;
@property (copy, nonatomic) NSString *tabGroupUUID;
@property (nonatomic, getter=isInUnnamedTabGroup) char inUnnamedTabGroup;
@property (nonatomic, getter=isPrivateBrowsing) char privateBrowsing;
@property (nonatomic, getter=isShared) char shared;
@property (nonatomic, getter=isSyncable) char syncable;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSURL *localURL;
@property (copy, nonatomic) NSURL *syncableURL;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) NSString *syncableTitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUrl:(id)a0;
- (void)setTitle:(id)a0;
- (void)setShared:(char)a0;
- (void)setModified:(char)a0;
- (void)setAdded:(char)a0;
- (void)setOrderIndex:(int)a0;
- (void)setTabGroupUUID:(id)a0;
- (void)adoptAttributesFromTab:(id)a0;
- (void)markAsRead;
- (void)setLocalAttributes:(id)a0;
- (void)setPinned:(char)a0 title:(id)a1 url:(id)a2;
- (void)setPrivateBrowsing:(char)a0;
- (void)setSyncable:(char)a0;
- (void)setSyncableURL:(id)a0;
- (void)_setPropertiesFromTabGroup:(id)a0;
- (void)didInsertIntoTabGroup:(id)a0;
- (void)didRemoveFromTabGroup;
- (void)markClean;
- (void)mergeWithTab:(id)a0;
- (void)setInUnnamedTabGroup:(char)a0;
- (void)setMoved:(char)a0;
- (void)setSyncPosition:(id)a0;
- (void)setURL:(id)a0 shouldSync:(char)a1;

@end

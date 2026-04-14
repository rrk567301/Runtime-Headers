@interface IMSuggestedActionsMessagePartChatItem : IMAttachmentMessagePartChatItem

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItem:(id)a0 suggestedActionsList:(id)a1;
- (BOOL)supportsSuggestedActionsMenu;

@end

@interface IMSuggestedActionsMessagePartChatItem : IMAttachmentMessagePartChatItem

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)initWithItem:(id)a0 suggestedActionsList:(id)a1;
- (char)supportsSuggestedActionsMenu;

@end

@interface _TtCV10ContactsUI28CNAvatarPickerPosePickerView11Coordinator : NSObject <CNAvatarPickerExtensionViewControllerDelegate> {
    void /* unknown type, empty encoding */ didSelectItem;
}

- (id)init;
- (void).cxx_destruct;
- (void)avatarPickerExtensionDidSelectItemWithImageData:(id)a0 memojiMetadata:(id)a1;
- (void)avatarPickerExtensionDidFinishWithImageData:(id)a0 memojiMetadata:(id)a1;
- (void)avatarPickerExtensionDidCancel;
- (void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:(id)a0;
- (void)avatarPickerExtensionDidCreateAvatarWithRecordData:(id)a0 identifier:(id)a1;
- (void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:(id)a0;

@end

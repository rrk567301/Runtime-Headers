@interface FI_TNSSharedFileListItem : NSObject {
    struct unique_ptr<TSharedFileListItem, std::default_delete<TSharedFileListItem>> { struct __compressed_pair<TSharedFileListItem *, std::default_delete<TSharedFileListItem>> { struct TSharedFileListItem *__value_; } __ptr_; } _item;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)displayName;
- (id)url;
- (struct OpaqueLSSharedFileListItemRef { } *)item;
- (struct TIconRef { struct TRef<OpaqueIconRef *, TRetainReleasePolicy<IconRef>> { struct OpaqueIconRef *x0; } x0; })icon;
- (id)initWithSFLItem:(struct OpaqueLSSharedFileListItemRef { } *)a0;

@end

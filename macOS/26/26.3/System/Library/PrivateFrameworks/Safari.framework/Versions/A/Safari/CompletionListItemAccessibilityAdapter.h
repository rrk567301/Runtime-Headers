@interface CompletionListItemAccessibilityAdapter : NSObject {
    struct RefPtr<Safari::CompletionListItem, WTF::RawPtrTraits<Safari::CompletionListItem>, WTF::DefaultRefDerefTraits<Safari::CompletionListItem>> { struct CompletionListItem *m_ptr; } _completionListItem;
}

@property (readonly, nonatomic) void *completionListItem;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithCompletionListItem:(void *)a0;

@end

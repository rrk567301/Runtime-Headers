@interface CompletionListItemAccessibilityAdapter : NSObject {
    struct RefPtr<Safari::CompletionListItem, WTF::RawPtrTraits<Safari::CompletionListItem>, WTF::DefaultRefDerefTraits<Safari::CompletionListItem>> { struct CompletionListItem *m_ptr; } _completionListItem;
}

@property (readonly, nonatomic) void *completionListItem;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithCompletionListItem:(void *)a0;

@end

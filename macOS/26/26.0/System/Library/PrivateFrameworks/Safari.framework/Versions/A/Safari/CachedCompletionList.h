@class NSString;

@interface CachedCompletionList : NSObject

@property (copy, nonatomic) NSString *queryString;
@property (readonly, nonatomic) struct Vector<WTF::RefPtr<Safari::CompletionListItem>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { void *m_buffer; unsigned int m_capacity; unsigned int m_size; } cachedCompletionVector;
@property (readonly, nonatomic) BOOL allowsInitialSelection;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCompletionVector:(void *)a0 forQuery:(id)a1 allowsInitialSelection:(BOOL)a2;
- (void)updateWithQuery:(id)a0;

@end

@class CNContactStore, EFLazyCache;

@interface EMCachingContactStore : NSObject

@property (retain, nonatomic) EFLazyCache *displayNameCache;
@property (readonly, nonatomic) CNContactStore *cnStore;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)_invalidateDisplayNameCache;
- (id)displayNameForEmailAddress:(id)a0 abbreviated:(BOOL)a1;
- (id)_fetchDisplayNameForEmailAddress:(id)a0 abbreviated:(BOOL)a1;
- (id)displayNameForEmailAddress:(id)a0;

@end

@class EFLocked, NSDate, EFPromise, NSCache;
@protocol EFScheduler, MUIBIMIProvider, MUICategoryProvider, MUIGenericAvatarProvider, MUIContactsProvider, MUIBusinessServiceProvider;

@interface MUIAvatarImageGenerator : NSObject {
    struct EFAtomicObject { _Atomic long long cfObject; } _contactsProvider;
}

@property (readonly, nonatomic) id<EFScheduler> avatarImageScheduler;
@property (readonly, nonatomic) id<EFScheduler> businessAvatarScheduler;
@property (readonly, nonatomic) id<MUIContactsProvider> contactsProvider;
@property (copy, nonatomic) id /* block */ contactsProviderHandler;
@property (readonly, nonatomic) EFPromise *allowsGeneratePromise;
@property (retain, nonatomic) EFLocked *senderStyleCache;
@property (retain, nonatomic) NSCache *avatarCache;
@property (retain, nonatomic) NSCache *genericAvatarCache;
@property (retain, nonatomic) NSDate *lastTimeout;
@property (readonly, nonatomic) id<MUIBIMIProvider> bimiProvider;
@property (readonly, nonatomic) id<MUICategoryProvider> categoryProvider;
@property (readonly, nonatomic) id<MUIBusinessServiceProvider> businessServiceProvider;
@property (readonly, nonatomic) id<MUIGenericAvatarProvider> genericAvatarProvider;

+ (id)log;
+ (id)stringForStyle:(long long)a0;
+ (id)businessContactForEmailAddress:(id)a0 imageData:(id)a1;
+ (void)roundAvatarView:(id)a0 withBorder:(BOOL)a1 size:(double)a2;

- (void).cxx_destruct;
- (id)initWithBimiProvider:(id)a0 messageRepository:(id)a1 contactsProviderHandler:(id /* block */)a2;
- (id)_avatarCacheKeyForContext:(id)a0;
- (id)_avatarCacheKeyForEmailAddress:(id)a0 isAuthenticated:(BOOL)a1 businessLogoID:(id)a2;
- (void)_avatarStyleForContext:(id)a0 completionHandler:(id /* block */)a1;
- (long long)_avatarStyleIfAvailableForContext:(id)a0;
- (id)_businessAvatarImageForContext:(id)a0 handler:(id /* block */)a1;
- (id)_cachedStyleIfAvailableForContext:(id)a0;
- (BOOL)_canGenerateImages;
- (void)_categoryForContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)_emailAddressDomainOrStringValueForAddress:(id)a0;
- (id)_generateAvatarImageForContext:(id)a0 handler:(id /* block */)a1;
- (void)_genericAvatarImageForContext:(id)a0 handler:(id /* block */)a1;
- (void)_invalidateAvatarCache;
- (id)_placeholderCacheEntryForContext:(id)a0 style:(long long)a1;
- (BOOL)_shouldShowCircleForSubtype:(unsigned long long)a0;
- (void)allowGeneratingAvatarImages;
- (id)contactForContext:(id)a0 handler:(id /* block */)a1;
- (id)initWithBimiProvider:(id)a0 categoryProvider:(id)a1 businessServiceProvider:(id)a2 genericAvatarProvider:(id)a3 contactsProviderHandler:(id /* block */)a4;
- (void)removeCachedAvatarImagesForAuthenticatedMessagesWithEmailAddress:(id)a0 businessLogoID:(id)a1;

@end

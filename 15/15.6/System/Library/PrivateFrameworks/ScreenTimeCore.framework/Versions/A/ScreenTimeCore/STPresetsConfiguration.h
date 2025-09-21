@class NSNumber;

@interface STPresetsConfiguration : NSObject

@property (readonly) NSNumber *allowedAppStoreRating;
@property (readonly, getter=isBooksAllowed) char booksAllowed;
@property (readonly) NSNumber *allowedTVRating;
@property (readonly) NSNumber *allowedMovieRating;
@property (readonly, getter=isExplicitMediaAllowed) char explicitMediaAllowed;
@property (readonly, getter=areMusicVideosAllowed) char musicVideosAllowed;
@property (readonly, getter=areMusicProfilesAllowed) char musicProfilesAllowed;
@property (readonly) long long allowedWebContent;
@property (readonly, getter=isSiriWebSearchAllowed) char siriWebSearchAllowed;
@property (readonly, getter=isSiriExplicitAllowed) char siriExplicitAllowed;
@property (readonly, getter=isDeletingAppsAllowed) char deletingAppsAllowed;

@end

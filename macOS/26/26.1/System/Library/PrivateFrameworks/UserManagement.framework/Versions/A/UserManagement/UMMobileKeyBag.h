@class UMUser;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;

+ (void)initialize;
+ (id)allSyncBubbleUsers;
+ (id)currentSyncBubbleUser;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (id)queuedSyncBubbleUsers;

@end

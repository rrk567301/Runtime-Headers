@class UMUser;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;

+ (id)allSyncBubbleUsers;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (void)initialize;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)currentSyncBubbleUser;
+ (id)queuedSyncBubbleUsers;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;

@end

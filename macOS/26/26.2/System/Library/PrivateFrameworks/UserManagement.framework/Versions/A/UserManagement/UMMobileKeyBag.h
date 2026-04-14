@class UMUser;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;

+ (void)initialize;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)queuedSyncBubbleUsers;
+ (id)currentSyncBubbleUser;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (id)allSyncBubbleUsers;

@end

@class UMUser;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;

+ (void)initialize;
+ (id)currentSyncBubbleUser;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (id)queuedSyncBubbleUsers;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)allSyncBubbleUsers;

@end

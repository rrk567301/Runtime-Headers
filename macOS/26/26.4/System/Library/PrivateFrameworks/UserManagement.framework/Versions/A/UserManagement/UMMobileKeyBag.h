@class UMUser;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;

+ (void)initialize;
+ (id)queuedSyncBubbleUsers;
+ (id)currentSyncBubbleUser;
+ (id)allSyncBubbleUsers;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;
+ (BOOL)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (BOOL)clearSyncBubblesWithOutError:(id *)a0;
+ (BOOL)startSyncBubbleForUser:(id)a0 outError:(id *)a1;

@end

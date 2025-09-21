@class UMUser;

@interface UMMobileKeyBag : NSObject

@property (class, readonly, nonatomic) UMUser *lastLoggedInUser;

+ (void)initialize;
+ (char)stopSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)allSyncBubbleUsers;
+ (char)clearSyncBubblesWithOutError:(id *)a0;
+ (id)currentSyncBubbleUser;
+ (id)queuedSyncBubbleUsers;
+ (char)startSyncBubbleForUser:(id)a0 outError:(id *)a1;
+ (id)syncBubbleMachServiceNamesForUser:(id)a0;

@end

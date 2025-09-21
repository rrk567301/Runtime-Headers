@class NSString, NSDate;

@interface MFSeenMessage : NSManagedObject

@property (retain, nonatomic) NSDate *dateSeen;
@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) char shouldDeleteFromServer;
@property (nonatomic) char isOnServer;

+ (char)automaticallyNotifiesObserversOfAccount;
+ (char)automaticallyNotifiesObserversOfDateSeen;
+ (char)automaticallyNotifiesObserversOfIsOnServer;
+ (char)automaticallyNotifiesObserversOfMessageID;
+ (char)automaticallyNotifiesObserversOfShouldDeleteFromServer;

- (void)setAccount:(id)a0;

@end

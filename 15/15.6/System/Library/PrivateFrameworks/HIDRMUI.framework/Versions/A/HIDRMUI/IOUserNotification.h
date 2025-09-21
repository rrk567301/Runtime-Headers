@class NSLock, NSString, NSURL, NSArray, IOThread, NSDictionary, NSMutableArray, NSObject, NSMapTable;
@protocol OS_dispatch_queue;

@interface IOUserNotification : NSObject

@property (class, readonly, nonatomic) NSMapTable *_notificationMapTable;
@property (class, readonly, nonatomic) NSLock *_notificationMapTableLock;

@property (nonatomic, getter=isVisible) char visible;
@property (nonatomic) unsigned long long updateCount;
@property (nonatomic) char responseReceived;
@property (nonatomic) char notificationCancelled;
@property (nonatomic) char notificationDismissed;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IOThread *thread;
@property (retain, nonatomic) NSMutableArray *buttonsMutable;
@property (retain, nonatomic) NSMutableArray *optionsMutable;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (nonatomic) double timeout;
@property (nonatomic) unsigned long long notificationLevel;
@property (nonatomic) char shouldDisplayOnTop;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSURL *iconURL;
@property (copy, nonatomic) NSDictionary *iconConfiguration;
@property (copy, nonatomic) NSString *helpBook;
@property (copy, nonatomic) NSString *helpAnchor;
@property (nonatomic) char noDefaultButton;
@property (nonatomic) char useRadioOptions;
@property (readonly, nonatomic) NSArray *buttons;
@property (readonly, nonatomic) NSArray *options;

+ (struct __CFUserNotification { } *)_findCFUserNotificationForUserNotification:(id)a0;
+ (id)notificationWithHeader:(id)a0 andMessage:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)_addOption:(id)a0;
- (char)addButtonWithTitle:(id)a0;
- (void)updateNotification;
- (void)dismissNotification;
- (char)_addButton:(id)a0;
- (id)_userNotificationDictionary;
- (unsigned long long)_userNotificationOptionFlags;
- (char)addOptionWithTitle:(id)a0 selected:(char)a1;
- (id)initWithHeader:(id)a0 andMessage:(id)a1;
- (void)presentNotification;
- (void)presentNotificationWithResponseHandler:(id /* block */)a0;

@end

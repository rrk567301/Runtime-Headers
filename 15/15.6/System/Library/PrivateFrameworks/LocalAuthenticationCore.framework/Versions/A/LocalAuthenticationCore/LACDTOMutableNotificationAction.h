@class NSString;

@interface LACDTOMutableNotificationAction : NSObject <LACUNNotificationAction>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char isDestructive;
@property (nonatomic) char isTitleLocalized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)doNotStartNewDelayAction;
+ (id)startNewDelayAction;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 isTitleLocalized:(char)a2 isDestructive:(char)a3;

@end

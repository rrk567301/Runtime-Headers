@class NSString, NSURL;

@interface LACUNMutableNotification : NSObject <LACUNNotification>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *categoryIdentifier;
@property (nonatomic) char shouldDisplayActionsInline;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) char isTitleLocalized;
@property (retain, nonatomic) NSString *body;
@property (nonatomic) char isBodyLocalized;
@property (retain, nonatomic) NSString *systemIconName;
@property (retain, nonatomic) NSURL *defaultActionURL;
@property (nonatomic) char isTimeSensitive;
@property (nonatomic) double withdrawInterval;
@property (nonatomic) double triggerInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end

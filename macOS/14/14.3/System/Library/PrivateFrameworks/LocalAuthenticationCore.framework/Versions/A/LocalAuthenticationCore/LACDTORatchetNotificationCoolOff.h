@class NSString, NSURL;

@interface LACDTORatchetNotificationCoolOff : NSObject <LACUNNotificationConfiguration>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *body;
@property (retain, nonatomic) NSString *systemIconName;
@property (retain, nonatomic) NSURL *defaultActionURL;
@property (nonatomic) BOOL isTimeSensitive;
@property (nonatomic) double maxAge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)categoryIdentifier;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 body:(id)a1 deeplinkURL:(id)a2;

@end

@class NSString, NSArray;

@interface LACDTOMutableNotificationCategory : NSObject <LACUNNotificationCategory>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic) char hiddenPreviewShowsTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newSecurityDelayRequiredCategory;
+ (id)securityDelayEndedCategory;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 actions:(id)a1 hiddenPreviewShowsTitle:(char)a2;

@end

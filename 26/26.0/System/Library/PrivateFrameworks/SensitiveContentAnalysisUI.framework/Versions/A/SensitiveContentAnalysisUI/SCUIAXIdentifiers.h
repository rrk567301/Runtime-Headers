@class NSString;

@interface SCUIAXIdentifiers : NSObject

@property (class, nonatomic, readonly) NSString *interventionScreenHeader;
@property (class, nonatomic, readonly) NSString *interventionScreenContent;
@property (class, nonatomic, readonly) NSString *actionMenu;
@property (class, nonatomic, readonly) NSString *actionMenuCancel;

+ (id)helpMenuAction:(long long)a0;
+ (id)interventionScreen:(long long)a0;
+ (id)interventionScreenAction:(long long)a0;

- (id)init;

@end

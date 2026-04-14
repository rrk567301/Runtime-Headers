@class NSString;

@interface LAUIAuthorizationSheetConfiguration : NSObject

@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *promptDFR;
@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL disableTouchID;
@property (nonatomic) BOOL disableWatch;
@property (nonatomic) BOOL disableSmartCard;
@property (nonatomic) BOOL disableUsername;

- (void).cxx_destruct;

@end

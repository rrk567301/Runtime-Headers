@class NSString;

@interface VUIDevice : NSObject

@property (class, readonly, nonatomic) NSString *name;
@property (class, readonly, nonatomic) NSString *model;
@property (class, readonly, nonatomic) NSString *systemName;
@property (class, readonly, nonatomic) NSString *systemVersion;
@property (class, readonly, nonatomic) NSString *guid;
@property (class, readonly, nonatomic) long long userInterfaceIdiom;
@property (class, readonly, nonatomic) char isPhone;
@property (class, readonly, nonatomic) char isPad;
@property (class, readonly, nonatomic) char isTV;
@property (class, readonly, nonatomic) char isMac;
@property (class, readonly, nonatomic) char isVision;

+ (char)supportsDeepColor;
+ (char)supportsStageManager;

@end

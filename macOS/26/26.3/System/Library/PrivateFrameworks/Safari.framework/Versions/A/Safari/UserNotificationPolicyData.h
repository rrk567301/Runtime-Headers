@class NSString, NSImage, NSDate;

@interface UserNotificationPolicyData : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSImage *icon;
@property (nonatomic) int policy;
@property (retain, nonatomic) NSDate *dateAdded;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayName:(id)a0 icon:(id)a1 policy:(int)a2;
- (void)updatePermission:(int)a0;

@end

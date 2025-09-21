@class NSString;

@interface IOUserNotificationButton : NSObject

@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *title;

+ (id)buttonWithTitle:(id)a0;

- (id)initWithTitle:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

@class NSString;

@interface IOUserNotificationButton : NSObject

@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *title;

+ (id)buttonWithTitle:(id)a0;

- (id)initWithTitle:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end

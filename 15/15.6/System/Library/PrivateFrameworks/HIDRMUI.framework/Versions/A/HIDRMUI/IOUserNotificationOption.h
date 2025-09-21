@class NSString;

@interface IOUserNotificationOption : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) char selected;

+ (id)optionWithTitle:(id)a0 selected:(char)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 selected:(char)a1;

@end

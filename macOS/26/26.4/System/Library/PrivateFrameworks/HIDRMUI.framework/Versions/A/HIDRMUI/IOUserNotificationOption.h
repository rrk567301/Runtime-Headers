@class NSString;

@interface IOUserNotificationOption : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL selected;

+ (id)optionWithTitle:(id)a0 selected:(BOOL)a1;

- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)initWithTitle:(id)a0 selected:(BOOL)a1;

@end

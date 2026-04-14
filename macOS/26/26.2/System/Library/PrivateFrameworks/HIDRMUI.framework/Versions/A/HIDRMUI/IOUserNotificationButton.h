@class NSString;

@interface IOUserNotificationButton : NSObject

@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;

+ (id)buttonWithTitle:(id)a0;
+ (id)buttonWithTitle:(id)a0 andIdentifier:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithTitle:(id)a0 andIdentifier:(id)a1;

@end

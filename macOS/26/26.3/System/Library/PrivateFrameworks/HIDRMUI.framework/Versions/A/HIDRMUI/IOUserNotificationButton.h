@class NSString;

@interface IOUserNotificationButton : NSObject

@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;

+ (id)buttonWithTitle:(id)a0;
+ (id)buttonWithTitle:(id)a0 andIdentifier:(id)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 andIdentifier:(id)a1;

@end

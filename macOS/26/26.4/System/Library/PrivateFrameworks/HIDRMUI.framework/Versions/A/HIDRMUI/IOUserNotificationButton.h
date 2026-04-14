@class NSString;

@interface IOUserNotificationButton : NSObject

@property (nonatomic) BOOL selected;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;

+ (id)buttonWithTitle:(id)a0;
+ (id)buttonWithTitle:(id)a0 andIdentifier:(id)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithTitle:(id)a0 andIdentifier:(id)a1;

@end

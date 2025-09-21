@class NSString, NSURL;

@interface CALNNotificationAction : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) NSURL *url;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1 systemImageName:(id)a2 url:(id)a3;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 systemImageName:(id)a2;

- (BOOL)isEqualToAction:(id)a0;
- (id)description;
- (id)initWithIdentifier:(id)a0 title:(id)a1 systemImageName:(id)a2 url:(id)a3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface EKNotificationInfoAction : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSString *title;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1;

@end

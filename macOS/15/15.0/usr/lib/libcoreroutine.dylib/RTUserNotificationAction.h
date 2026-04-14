@class NSString, NSURL;

@interface RTUserNotificationAction : NSObject

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *iconWithSystemImageName;
@property (readonly, copy, nonatomic) id /* block */ handler;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 title:(id)a1 iconWithSystemImageName:(id)a2 handler:(id /* block */)a3;
- (id)initWithActionIdentifier:(id)a0 title:(id)a1 url:(id)a2 iconWithSystemImageName:(id)a3 handler:(id /* block */)a4;

@end

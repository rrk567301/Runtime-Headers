@class NSSet;

@interface ACUISOpenApplicationAction : BSAction

@property (readonly) NSSet *launchActions;

- (id)init;
- (id)initWithURL:(id)a0;
- (id)initWithNSUserActivity:(id)a0;

@end

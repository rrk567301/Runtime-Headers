@class NSString;

@interface SKAuthenticationResponseEvent : SKEvent

@property (readonly, copy, nonatomic) NSString *password;

- (id)initWithPassword:(id)a0;
- (void).cxx_destruct;
- (id)descriptionWithLevel:(int)a0;

@end

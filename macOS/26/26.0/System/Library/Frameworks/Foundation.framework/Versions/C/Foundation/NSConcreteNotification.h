@class NSString, NSDictionary;

@interface NSConcreteNotification : NSNotification {
    NSString *name;
    id object;
    NSDictionary *userInfo;
}

- (void)dealloc;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (id)object;
- (id)name;
- (id)userInfo;

@end

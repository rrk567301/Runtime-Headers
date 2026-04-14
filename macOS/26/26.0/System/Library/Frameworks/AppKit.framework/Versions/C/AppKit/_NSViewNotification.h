@class NSString;

@interface _NSViewNotification : NSNotification {
    id _object;
    NSString *_name;
}

@property (retain) id object;

- (void)setObject:(id)a0;
- (void)dealloc;
- (void)setName:(id)a0;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (id)object;
- (id)name;
- (id)userInfo;

@end

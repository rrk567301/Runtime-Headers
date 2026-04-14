@class NSString;

@interface _NSViewNotification : NSNotification {
    id _object;
    NSString *_name;
}

@property (retain) id object;

- (void)setObject:(id)a0;
- (id)object;
- (id)userInfo;
- (void)setName:(id)a0;
- (void)dealloc;
- (id)name;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;

@end

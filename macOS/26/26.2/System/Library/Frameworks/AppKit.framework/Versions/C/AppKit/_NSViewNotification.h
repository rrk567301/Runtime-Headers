@class NSString;

@interface _NSViewNotification : NSNotification {
    id _object;
    NSString *_name;
}

@property (retain) id object;

- (void)setName:(id)a0;
- (id)object;
- (void)setObject:(id)a0;
- (id)userInfo;
- (id)name;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (void)dealloc;

@end

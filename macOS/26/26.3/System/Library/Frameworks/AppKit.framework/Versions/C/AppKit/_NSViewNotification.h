@class NSString;

@interface _NSViewNotification : NSNotification {
    id _object;
    NSString *_name;
}

@property (retain) id object;

- (id)object;
- (void)setObject:(id)a0;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (id)userInfo;
- (void)setName:(id)a0;

@end

@class NSString;

@interface MDSNotificationTokenRecord : NSObject {
    NSString *_aName;
    SEL _aSelector;
    id _anObject;
    int _token;
}

- (SEL)selector;
- (void)dealloc;
- (id)object;
- (id)name;
- (int)token;
- (id)initWithName:(id)a0 selector:(SEL)a1 object:(id)a2 andToken:(int)a3;

@end

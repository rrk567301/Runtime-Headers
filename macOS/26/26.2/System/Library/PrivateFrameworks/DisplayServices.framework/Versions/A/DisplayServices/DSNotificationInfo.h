@class NSString;

@interface DSNotificationInfo : NSObject {
    NSString *_desc;
}

@property (readonly) void *observer;
@property (readonly) void /* function */ *callback;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithObserver:(void *)a0 andCalback:(void /* function */ *)a1;

@end

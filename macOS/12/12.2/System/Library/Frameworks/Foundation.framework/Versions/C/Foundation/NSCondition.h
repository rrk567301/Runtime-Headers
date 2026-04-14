@class NSString;

@interface NSCondition : NSObject <NSLocking> {
    void *_priv;
}

@property (copy) NSString *name;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)lock;
- (void)unlock;
- (void)signal;
- (void)wait;
- (BOOL)waitUntilDate:(id)a0;
- (void)broadcast;

@end

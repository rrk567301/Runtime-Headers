@class NSObject;
@protocol OS_dispatch_group;

@interface SADispatchGroup : NSObject

@property (retain) NSObject<OS_dispatch_group> *group;
@property int entries;

+ (id)new;

- (void)enter;
- (int)wait:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)leave;
- (id)init;

@end

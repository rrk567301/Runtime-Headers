@class CoreRCInterfaceListener;

@interface CoreRCInterface : NSObject

@property (copy, nonatomic) id testProperty;
@property (nonatomic) CoreRCInterfaceListener *listener;

- (void)dealloc;
- (void)scheduleWithDispatchQueue:(id)a0;
- (BOOL)doesNotImplement:(SEL)a0 error:(id *)a1;
- (id)propertyForKey:(id)a0 error:(id *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)unscheduleFromDispatchQueue:(id)a0;

@end

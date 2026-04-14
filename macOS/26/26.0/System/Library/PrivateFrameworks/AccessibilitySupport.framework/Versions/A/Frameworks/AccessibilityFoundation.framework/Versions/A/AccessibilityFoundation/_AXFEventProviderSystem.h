@class NSString;

@interface _AXFEventProviderSystem : _AXFEventProvider <AXEEventTapListener>

@property (nonatomic) BOOL _didRegisterEventTap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)dealloc;
- (BOOL)_handleEvent:(struct __CGEvent { } *)a0;
- (void)stop;
- (void)eventTapManager:(id)a0 passivelyTappedEvent:(struct __CGEvent { } *)a1 type:(unsigned int)a2 withProxy:(struct __CGEventTapProxy { } *)a3;

@end

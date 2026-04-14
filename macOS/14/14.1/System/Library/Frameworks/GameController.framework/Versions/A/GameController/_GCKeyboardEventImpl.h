@class NSString;

@interface _GCKeyboardEventImpl : NSObject <_GCKeyboardEvent>

@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long usagePage;
@property (nonatomic) long long usage;
@property (nonatomic) long long down;
@property (nonatomic) unsigned long long sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCGEvent:(struct __CGEvent { } *)a0;
- (id)initWithKeyboardEvent:(id)a0;
- (id)initWithTimestamp:(unsigned long long)a0 usagePage:(long long)a1 usage:(long long)a2 down:(long long)a3 sender:(unsigned long long)a4;

@end

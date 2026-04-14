@class NSString;

@interface UINSEvent : NSObject

@property (nonatomic) BOOL isDown;
@property (nonatomic) long long modifierFlags;
@property (readonly, nonatomic) NSString *modifiedInput;
@property (readonly, nonatomic) NSString *unmodifiedInput;
@property (readonly, nonatomic) NSString *shiftModifiedInput;
@property (readonly, nonatomic) NSString *commandModifiedInput;
@property (readonly, nonatomic) unsigned long long timestampMachAbs;
@property (readonly, nonatomic) unsigned short virtualKeyCode;
@property (readonly, nonatomic) long long hidUsageCode;
@property (readonly, nonatomic) unsigned int contextId;
@property (readonly, nonatomic) id nsEvent;
@property (readonly, nonatomic, getter=isDeadKey) BOOL deadKey;
@property (readonly, nonatomic) struct __CGEvent { } *cgEvent;

- (void).cxx_destruct;
- (id)initWithNSEvent:(id)a0 contextId:(unsigned int)a1;

@end

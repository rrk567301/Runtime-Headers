@interface CPDistributedMessagingCallout : NSObject {
    char _returnsVoidIsValid;
}

@property (readonly, retain, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic) char returnsVoid;

- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end

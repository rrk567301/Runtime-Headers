@class NSString, NSArray;
@protocol HMFMessageReceiver;

@interface HMFMessageBinding : HMFObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *policies;
@property (readonly) SEL selector;
@property (readonly, weak, nonatomic) id<HMFMessageReceiver> messageReceiver;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 policies:(id)a1 selector:(SEL)a2;
- (id)initWithName:(id)a0 policies:(id)a1 selector:(SEL)a2 messageReceiver:(id)a3;

@end

@class ASKEventHandlerImplementor, ASKEventHandlerDescription, NSObject;

@interface ASKEventHandler : NSObject <NSCoding> {
    NSObject *_object;
    ASKEventHandlerDescription *_eventHandlerDescription;
    ASKEventHandlerImplementor *_eventHandlerImplementor;
    char _enabled;
    char _processed;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)name;
- (char)enabled;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)object;
- (void)setEnabled:(char)a0;
- (void)setObject:(id)a0;
- (void)disable;
- (unsigned int)eventID;
- (void)enable;
- (unsigned int)eventClass;
- (id)notificationName;
- (char)processed;
- (void)eventNotification:(id)a0;
- (void)setProcessed:(char)a0;
- (id)processEventNotification:(id)a0;
- (void)eventAction:(id)a0;
- (void)eventDoubleAction:(id)a0;
- (Class)eventHandlerDataSourceClass;
- (Class)eventHandlerDelegateClass;
- (id)eventHandlerDescription;
- (id)eventHandlerImplementor;
- (Class)eventHandlerImplementorClass;
- (id)getAppleEvent;
- (id)getAppleEventForObject:(id)a0;
- (id)getAppleEventForObject:(id)a0 withParameters:(id)a1;
- (id)getAppleEventFromNotification:(id)a0;
- (id)initWithObject:(id)a0 eventHandlerDescription:(id)a1 enable:(char)a2;
- (char)isKindOfEventHandler:(id)a0;
- (id)processEvent;
- (id)processEventForObject:(id)a0;
- (id)processEventForObject:(id)a0 withParameters:(id)a1;
- (id)processEventWithEvent:(id)a0;
- (id)processEventWithParameters:(id)a0;
- (char)processOnLoad;
- (void)setEventHandlerDescription:(id)a0;
- (void)setEventHandlerImplementor:(id)a0;

@end

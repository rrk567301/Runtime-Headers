@class ASKEventHandlerImplementor, ASKEventHandlerDescription, NSObject;

@interface ASKEventHandler : NSObject <NSCoding> {
    NSObject *_object;
    ASKEventHandlerDescription *_eventHandlerDescription;
    ASKEventHandlerImplementor *_eventHandlerImplementor;
    BOOL _enabled;
    BOOL _processed;
}

- (void)dealloc;
- (id)name;
- (id)init;
- (void)finalize;
- (void)setObject:(id)a0;
- (id)object;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (BOOL)enabled;
- (unsigned int)eventClass;
- (unsigned int)eventID;
- (void)disable;
- (void)enable;
- (id)notificationName;
- (void)eventNotification:(id)a0;
- (BOOL)processed;
- (void)setProcessed:(BOOL)a0;
- (id)processEventNotification:(id)a0;
- (id)initWithObject:(id)a0 eventHandlerDescription:(id)a1 enable:(BOOL)a2;
- (id)eventHandlerImplementor;
- (void)setEventHandlerImplementor:(id)a0;
- (id)eventHandlerDescription;
- (void)setEventHandlerDescription:(id)a0;
- (Class)eventHandlerImplementorClass;
- (Class)eventHandlerDelegateClass;
- (Class)eventHandlerDataSourceClass;
- (BOOL)processOnLoad;
- (id)processEventForObject:(id)a0;
- (id)processEvent;
- (id)processEventWithEvent:(id)a0;
- (id)processEventForObject:(id)a0 withParameters:(id)a1;
- (id)processEventWithParameters:(id)a0;
- (id)getAppleEvent;
- (id)getAppleEventForObject:(id)a0;
- (id)getAppleEventForObject:(id)a0 withParameters:(id)a1;
- (id)getAppleEventFromNotification:(id)a0;
- (void)eventAction:(id)a0;
- (void)eventDoubleAction:(id)a0;
- (BOOL)isKindOfEventHandler:(id)a0;

@end

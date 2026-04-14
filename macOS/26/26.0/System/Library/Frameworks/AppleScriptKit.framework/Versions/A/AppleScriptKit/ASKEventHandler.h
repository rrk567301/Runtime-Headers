@class ASKEventHandlerImplementor, ASKEventHandlerDescription, NSObject;

@interface ASKEventHandler : NSObject <NSCoding> {
    NSObject *_object;
    ASKEventHandlerDescription *_eventHandlerDescription;
    ASKEventHandlerImplementor *_eventHandlerImplementor;
    BOOL _enabled;
    BOOL _processed;
}

- (void)finalize;
- (void)disable;
- (id)notificationName;
- (void)enable;
- (void)setObject:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (unsigned int)eventID;
- (BOOL)enabled;
- (id)init;
- (unsigned int)eventClass;
- (id)object;
- (id)name;
- (id)initWithCoder:(id)a0;
- (BOOL)processed;
- (void)eventNotification:(id)a0;
- (void)setProcessed:(BOOL)a0;
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
- (id)initWithObject:(id)a0 eventHandlerDescription:(id)a1 enable:(BOOL)a2;
- (BOOL)isKindOfEventHandler:(id)a0;
- (id)processEvent;
- (id)processEventForObject:(id)a0;
- (id)processEventForObject:(id)a0 withParameters:(id)a1;
- (id)processEventWithEvent:(id)a0;
- (id)processEventWithParameters:(id)a0;
- (BOOL)processOnLoad;
- (void)setEventHandlerDescription:(id)a0;
- (void)setEventHandlerImplementor:(id)a0;

@end

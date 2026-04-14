@class ASKEventHandlerImplementor, ASKEventHandlerDescription, NSObject;

@interface ASKEventHandler : NSObject <NSCoding> {
    NSObject *_object;
    ASKEventHandlerDescription *_eventHandlerDescription;
    ASKEventHandlerImplementor *_eventHandlerImplementor;
    BOOL _enabled;
    BOOL _processed;
}

- (unsigned int)eventID;
- (id)notificationName;
- (void)disable;
- (void)enable;
- (unsigned int)eventClass;
- (void)setEnabled:(BOOL)a0;
- (void)setObject:(id)a0;
- (id)object;
- (BOOL)enabled;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)name;
- (id)init;
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

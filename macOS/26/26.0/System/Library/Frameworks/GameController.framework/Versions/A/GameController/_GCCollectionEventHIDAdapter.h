@class NSArray, NSString, _GCHIDEventParser;
@protocol _GCHIDEventSource;

@interface _GCCollectionEventHIDAdapter : NSObject <_GCCollectionEventSource> {
    _GCHIDEventParser *_parser;
}

@property (retain, nonatomic) id<_GCHIDEventSource> HIDEventSource;
@property (retain, nonatomic) id HIDEventObservation;
@property (copy) NSArray *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRootParser:(id)a0 source:(id)a1 service:(id)a2;
- (id)observeCollectionEvents:(id /* block */)a0;

@end

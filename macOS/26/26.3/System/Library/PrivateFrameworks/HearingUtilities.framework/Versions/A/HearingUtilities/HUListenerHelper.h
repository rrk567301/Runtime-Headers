@protocol HUListenerHelperDelegate;

@interface HUListenerHelper : NSObject {
    id _listenerAddress;
    id<HUListenerHelperDelegate> _delegate;
}

+ (id)listenerHelperWithListener:(id)a0 andDelegate:(id)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithListener:(id)a0 andDelegate:(id)a1;

@end

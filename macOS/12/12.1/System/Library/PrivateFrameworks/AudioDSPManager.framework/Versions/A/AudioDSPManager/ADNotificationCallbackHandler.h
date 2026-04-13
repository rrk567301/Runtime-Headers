@class NSString;

@interface ADNotificationCallbackHandler : NSObject <ADNotificationHandler> {
    id /* block */ _callback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callbackHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;
- (void)handleEvent:(id)a0;

@end

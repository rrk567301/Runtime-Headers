@class NFApplet, NSString, NSDictionary;
@protocol NFContactlessSessionDelegate;

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {
    NSDictionary *_appletsById;
    id<NFContactlessSessionDelegate> _delegate;
    char _fieldNotificationSent;
}

@property id<NFContactlessSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endSession;
- (id)allApplets;
- (id)appletWithIdentifier:(id)a0;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (char)stopCardEmulation;
- (char)stopCardEmulation:(id *)a0;
- (void)didDetectField:(char)a0;
- (void)didDetectFieldNotification:(id)a0;
- (void)didEndUnexpectedly;
- (void)didFelicaStateChange:(id)a0;
- (void)didSelectApplet:(id)a0;
- (void)didStartSession:(id)a0;
- (char)setActiveApplet:(id)a0;
- (char)setActiveApplet:(id)a0 error:(id *)a1;
- (char)startCardEmulation;
- (char)startCardEmulation:(id *)a0;

@end

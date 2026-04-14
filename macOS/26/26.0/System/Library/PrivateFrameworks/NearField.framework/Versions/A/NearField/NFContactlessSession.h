@class NFApplet, NSString, NSDictionary;
@protocol NFContactlessSessionDelegate;

@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {
    NSDictionary *_appletsById;
    id<NFContactlessSessionDelegate> _delegate;
    BOOL _fieldNotificationSent;
}

@property id<NFContactlessSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allApplets;
- (id)appletWithIdentifier:(id)a0;
- (void)endSession;
- (void)didEndUnexpectedly;
- (void).cxx_destruct;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)stopCardEmulation;
- (BOOL)stopCardEmulation:(id *)a0;
- (BOOL)_setActiveApplets:(id)a0 withCardType:(unsigned int)a1;
- (void)didDetectField:(BOOL)a0;
- (BOOL)_setActiveApplets:(id)a0 withCardType:(unsigned int)a1 error:(id *)a2;
- (void)didDetectFieldNotification:(id)a0;
- (void)didFelicaStateChange:(id)a0;
- (void)didSelectApplet:(id)a0;
- (void)didStartSession:(id)a0;
- (BOOL)setActiveApplet:(id)a0;
- (BOOL)setActiveApplet:(id)a0 error:(id *)a1;
- (BOOL)startCardEmulation;
- (BOOL)startCardEmulation:(id *)a0;

@end

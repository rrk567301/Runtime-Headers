@class NSString;

@interface BrowserSharingService : NSSharingService <NSSharingServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTitle:(id)a0 image:(id)a1 alternateImage:(id)a2 items:(id)a3 handler:(id /* block */)a4;
- (id)initWithSharingService:(id)a0 title:(id)a1 items:(id)a2 handler:(id /* block */)a3;

@end

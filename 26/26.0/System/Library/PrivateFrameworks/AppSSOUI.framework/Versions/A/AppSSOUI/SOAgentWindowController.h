@class SOAgent, NSString;

@interface SOAgentWindowController : NSWindowController <NSWindowDelegate>

@property (retain, nonatomic) SOAgent *agent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowWillClose:(id)a0;
- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;

@end

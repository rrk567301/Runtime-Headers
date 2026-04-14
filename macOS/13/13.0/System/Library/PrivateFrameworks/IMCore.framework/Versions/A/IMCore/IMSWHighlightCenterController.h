@class NSString, SWHighlightCenter;

@interface IMSWHighlightCenterController : NSObject <SWHighlightCenterDelegate>

@property (readonly, nonatomic) SWHighlightCenter *highlightCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;
+ (id)sharedControllerWithAppIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)fetchAttributionsForHighlight:(id)a0;
- (id)initWithAppIdentifier:(id)a0;
- (id)collaborationHighlightForURL:(id)a0 error:(id *)a1;

@end

@class _EXQueryController, NSDictionary, NSString;

@interface FigExtensionKitController : NSObject <_EXQueryControllerDelegate>

@property (retain, nonatomic) _EXQueryController *controller;
@property (retain) NSDictionary *extensions;
@property (retain, nonatomic) id extensionsKeySet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initForExtensionPoints:(id)a0;
- (id)listForExtensionPointName:(id)a0;
- (void)queryControllerDidUpdate:(id)a0;
- (void)refreshExtensions:(id)a0;

@end

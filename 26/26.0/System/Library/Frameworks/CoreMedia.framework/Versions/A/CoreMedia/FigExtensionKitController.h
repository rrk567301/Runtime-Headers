@class _EXQueryController, NSDictionary, NSString;

@interface FigExtensionKitController : NSObject <_EXQueryControllerDelegate>

@property (retain, nonatomic) _EXQueryController *controller;
@property (retain) NSDictionary *extensions;
@property (retain, nonatomic) id extensionsKeySet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

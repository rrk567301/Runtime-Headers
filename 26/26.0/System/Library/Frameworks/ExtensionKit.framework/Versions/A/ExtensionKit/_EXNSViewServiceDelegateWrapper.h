@class NSString;
@protocol _EXViewServiceApplicationDelegate;

@interface _EXNSViewServiceDelegateWrapper : NSObject <NSViewServiceDelegate>

@property (retain) id<_EXViewServiceApplicationDelegate> inner;
@property (readonly) NSString *viewControllerClassName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

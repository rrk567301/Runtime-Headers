@class NSString;

@interface EXSwiftUI_Subsystem : NSObject <PKModularService>

@property (class, readonly) char initialized;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)initForPlugInKit;

- (id)init;
- (void)beginUsing:(id)a0 withBundle:(id)a1;

@end

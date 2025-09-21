@class NSArray, NSString;

@interface UISApplicationInitializationContextParameters : NSObject <BSXPCCoding>

@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (copy, nonatomic) NSArray *deviceFamilies;
@property (nonatomic) char requiresFullScreen;
@property (nonatomic) char supportsMultiwindow;
@property (nonatomic) unsigned int initialCGDirectDisplayID;
@property (nonatomic) struct CGSize { double width; double height; } usableDisplaySizeHint;
@property (nonatomic) char preferSmallerDisplaySize;
@property (nonatomic) char useTrueDisplaySize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

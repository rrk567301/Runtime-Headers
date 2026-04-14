@class NSArray, AXFScreen, NSString;
@protocol AXFScreenSourceDelegate;

@interface AXFScreenSourceTest : NSObject <AXFScreenSource>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalScreenBounds;
@property (retain, nonatomic) NSArray *screens;
@property (retain, nonatomic) AXFScreen *mainScreen;
@property (weak, nonatomic) id<AXFScreenSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end

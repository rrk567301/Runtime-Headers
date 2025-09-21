@class NSString, NSImage;
@protocol PXMenuAction;

@interface PXActionItem : NSObject <PXMenuAction>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *systemImageName;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, nonatomic) unsigned long long role;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) id<PXMenuAction> alternateAction;
@property (nonatomic) BOOL wantsDisclosureButton;
@property (readonly, nonatomic) id /* block */ customMenuElementFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

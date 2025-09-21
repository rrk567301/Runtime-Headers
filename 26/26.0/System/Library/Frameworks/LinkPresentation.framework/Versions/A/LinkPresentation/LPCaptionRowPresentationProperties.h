@class LPCaptionButtonPresentationProperties, LPCaptionPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject

@property (readonly, nonatomic) BOOL hasAnyContent;
@property (retain, nonatomic) LPCaptionPresentationProperties *leading;
@property (retain, nonatomic) LPCaptionPresentationProperties *trailing;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *button;

- (id)right;
- (id)left;
- (id)init;
- (void).cxx_destruct;
- (void)applyToAllCaptions:(id /* block */)a0;

@end

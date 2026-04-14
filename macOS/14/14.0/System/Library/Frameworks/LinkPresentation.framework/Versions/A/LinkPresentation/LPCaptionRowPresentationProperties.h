@class LPCaptionButtonPresentationProperties, LPCaptionPresentationProperties;

@interface LPCaptionRowPresentationProperties : NSObject {
    LPCaptionPresentationProperties *_leading;
    LPCaptionPresentationProperties *_trailing;
}

@property (readonly, nonatomic) BOOL hasAnyContent;
@property (readonly, retain, nonatomic) LPCaptionPresentationProperties *leading;
@property (readonly, retain, nonatomic) LPCaptionPresentationProperties *trailing;
@property (retain, nonatomic) LPCaptionButtonPresentationProperties *button;

- (id)init;
- (void).cxx_destruct;
- (id)left;
- (id)right;
- (void)applyToAllCaptions:(id /* block */)a0;

@end

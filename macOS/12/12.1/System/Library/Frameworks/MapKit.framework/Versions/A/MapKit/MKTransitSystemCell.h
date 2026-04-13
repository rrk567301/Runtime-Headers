@class NSString, NSImage, NSView, MKImageView, _MKUILabel, NSLayoutConstraint;

@interface MKTransitSystemCell : MKCustomSeparatorCell <MKMultiLineLabelContainer> {
    MKImageView *_shieldImageView;
    _MKUILabel *_systemLabel;
    NSView *_disclosureButton;
    NSLayoutConstraint *_imageToLabelConstraint;
}

@property (copy, nonatomic) NSString *systemName;
@property (retain, nonatomic) NSImage *systemArtwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)multilineTextFieldsWithinContainer;

@end

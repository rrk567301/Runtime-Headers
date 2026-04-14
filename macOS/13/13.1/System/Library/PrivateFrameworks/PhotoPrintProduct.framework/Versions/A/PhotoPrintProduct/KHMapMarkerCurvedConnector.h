@interface KHMapMarkerCurvedConnector : KHMapMarkerConnector {
    struct CGImage { } *_arrowHeadImage;
}

@property BOOL curvedAbove;
@property float startGap;
@property float endGap;

- (unsigned long long)numberOfAvailableLayoutChoices;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; })rectForLayoutChoiceIdx:(unsigned long long)a0;
- (void)setLayoutChoiceIdx:(unsigned long long)a0;
- (id)_renderTreatment;

@end

@class _MKUserLocationView;

@interface MKUserLocationView : MKAnnotationView {
    char _selected;
}

@property (retain, nonatomic, getter=_mkUserLocationView, setter=_setMKUserLocationView:) _MKUserLocationView *mkUserLocationView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_setSelected:(char)a0 animated:(char)a1;
- (char)isSelected;
- (void)setAnnotation:(id)a0;
- (id)_innerImageMask;
- (double)_accuracyRingAlpha;
- (char)_allowedToShowCallout;
- (char)_allowsAccuracyRing;
- (char)_allowsPulse;
- (void)_animateGemPop;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_annotationTrackingInsets;
- (char)_canShowHeadingIndicator;
- (double)_heading;
- (char)_isStale;
- (id)_lastLocation;
- (void)_locationManagerFailedToUpdateLocation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mapkit_visibleRect;
- (double)_maxRadiusToShowAccuracyRing;
- (double)_puckAlpha;
- (char)_rotateInnerImageToMatchCourse;
- (float)_selectionPriority;
- (void)_setAccuracyRingAlpha:(double)a0;
- (void)_setAllowsAccuracyRing:(char)a0;
- (void)_setAllowsPulse:(char)a0;
- (void)_setCanShowHeadingIndicator:(char)a0;
- (void)_setHeading:(double)a0;
- (void)_setInnerImageMask:(id)a0;
- (void)_setMapDisplayStyle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; char x5; })a0;
- (void)_setMapPitchRadians:(double)a0;
- (void)_setMapRotationRadians:(double)a0;
- (void)_setMapType:(unsigned long long)a0;
- (void)_setMaxRadiusToShowAccuracyRing:(double)a0;
- (void)_setPuckAlpha:(double)a0;
- (void)_setPuckScale:(double)a0;
- (void)_setRotateInnerImageToMatchCourse:(char)a0;
- (void)_setSelectionPriority:(float)a0;
- (void)_setShouldDisplayHeading:(char)a0;
- (void)_setShouldInnerPulse:(char)a0;
- (void)_setShouldShowOuterRing:(char)a0;
- (char)_shouldDisplayHeading;
- (char)_shouldInnerPulse;
- (char)_shouldShowOuterRing;
- (void)_updateFromMap;
- (void)_updateStateFromLocation:(id)a0 duration:(double)a1;
- (struct CGPoint { double x0; double x1; })calloutOffset;
- (char)canShowCallout;
- (struct CGPoint { double x0; double x1; })centerOffset;
- (id)detailCalloutAccessoryView;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (char)isDraggable;
- (id)leftCalloutAccessoryView;
- (struct CGPoint { double x0; double x1; })leftCalloutOffset;
- (void)prepareForDisplay;
- (id)rightCalloutAccessoryView;
- (struct CGPoint { double x0; double x1; })rightCalloutOffset;
- (void)setCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setCanShowCallout:(char)a0;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setDetailCalloutAccessoryView:(id)a0;
- (void)setLeftCalloutAccessoryView:(id)a0;
- (void)setLeftCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setRightCalloutAccessoryView:(id)a0;
- (void)setRightCalloutOffset:(struct CGPoint { double x0; double x1; })a0;

@end

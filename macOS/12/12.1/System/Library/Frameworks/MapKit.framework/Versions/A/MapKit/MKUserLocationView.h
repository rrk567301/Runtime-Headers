@class _MKUserLocationView;

@interface MKUserLocationView : MKAnnotationView {
    BOOL _selected;
}

@property (retain, nonatomic, getter=_mkUserLocationView, setter=_setMKUserLocationView:) _MKUserLocationView *mkUserLocationView;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)_isStale;
- (BOOL)isSelected;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setAnnotation:(id)a0;
- (id)_lastLocation;
- (double)_heading;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_annotationTrackingInsets;
- (void)_setMapPitchRadians:(double)a0;
- (void)_setMapType:(unsigned long long)a0;
- (void)_setMapDisplayStyle:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; BOOL x4; })a0;
- (void)_setMapRotationRadians:(double)a0;
- (float)_selectionPriority;
- (struct CGPoint { double x0; double x1; })centerOffset;
- (BOOL)canShowCallout;
- (id)detailCalloutAccessoryView;
- (void)_updateFromMap;
- (void)setCanShowCallout:(BOOL)a0;
- (void)setCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setLeftCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)setRightCalloutOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })calloutOffset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mapkit_visibleRect;
- (BOOL)_shouldInnerPulse;
- (BOOL)_shouldShowOuterRing;
- (id)_innerImageMask;
- (BOOL)_rotateInnerImageToMatchCourse;
- (double)_accuracyRingAlpha;
- (BOOL)_allowsPulse;
- (BOOL)_canShowHeadingIndicator;
- (BOOL)_shouldDisplayHeading;
- (BOOL)_allowsAccuracyRing;
- (double)_maxRadiusToShowAccuracyRing;
- (void)_setSelectionPriority:(float)a0;
- (void)setCenterOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })leftCalloutOffset;
- (struct CGPoint { double x0; double x1; })rightCalloutOffset;
- (id)leftCalloutAccessoryView;
- (void)setLeftCalloutAccessoryView:(id)a0;
- (id)rightCalloutAccessoryView;
- (void)setRightCalloutAccessoryView:(id)a0;
- (void)setDetailCalloutAccessoryView:(id)a0;
- (void)prepareForDisplay;
- (BOOL)_allowedToShowCallout;
- (BOOL)isDraggable;
- (void)_updateStateFromLocation:(id)a0 duration:(double)a1;
- (void)_locationManagerFailedToUpdateLocation;
- (void)_setShouldDisplayHeading:(BOOL)a0;
- (void)_setCanShowHeadingIndicator:(BOOL)a0;
- (void)_setHeading:(double)a0;
- (void)_setAllowsPulse:(BOOL)a0;
- (void)_setShouldInnerPulse:(BOOL)a0;
- (void)_setShouldShowOuterRing:(BOOL)a0;
- (void)_setAllowsAccuracyRing:(BOOL)a0;
- (void)_setMaxRadiusToShowAccuracyRing:(double)a0;
- (void)_animateGemPop;
- (double)_puckAlpha;
- (void)_setPuckAlpha:(double)a0;
- (void)_setAccuracyRingAlpha:(double)a0;
- (void)_setPuckScale:(double)a0;
- (void)_setInnerImageMask:(id)a0;
- (void)_setRotateInnerImageToMatchCourse:(BOOL)a0;

@end

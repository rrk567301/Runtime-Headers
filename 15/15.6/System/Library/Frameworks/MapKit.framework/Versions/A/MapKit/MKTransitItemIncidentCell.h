@class NSString, MKTransitItemIncidentView;

@interface MKTransitItemIncidentCell : MKCustomSeparatorCell <MKTransitItemIncidentView> {
    MKTransitItemIncidentView *_incidentView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_configureViews;
- (void)_updateIncidentViewBottomOffset;
- (void)configureWithIncident:(id)a0 referenceDate:(id)a1 shouldShowImage:(char)a2 inSiri:(char)a3;
- (void)configureWithIncidentMessage:(id)a0 referenceDate:(id)a1 shouldShowImage:(char)a2 inSiri:(char)a3;
- (void)configureWithMessage:(id)a0 incident:(id)a1 referenceDate:(id)a2 shouldShowImage:(char)a3 inSiri:(char)a4;
- (id)initWithReuseIdentifier:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setLeadingSeparatorInset:(double)a0;
- (void)setSeparatorHidden:(char)a0;
- (void)setTrailingSeparatorInset:(double)a0;

@end

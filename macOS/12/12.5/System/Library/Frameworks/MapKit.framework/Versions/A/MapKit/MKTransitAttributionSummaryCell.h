@class NSString, _MKUILabel;

@interface MKTransitAttributionSummaryCell : NSTableCellView <MKMultiLineLabelContainer> {
    _MKUILabel *_attributionLabel;
}

@property (copy, nonatomic) NSString *attributionSummary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)_newStationCardUIEnabled;
- (id)multilineTextFieldsWithinContainer;

@end

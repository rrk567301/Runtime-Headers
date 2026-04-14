@class NSButton, NSString, _MKUILabel, MKTransitInfoLabelView;
@protocol _MKTransitConnectionCellDelegate, GEOTransitConnectionInfo;

@interface _MKTransitConnectionCell : MKCustomSeparatorCell <MKMultiLineLabelContainer> {
    _MKUILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    NSButton *_button;
}

@property (retain, nonatomic) id<GEOTransitConnectionInfo> connectionInfo;
@property (weak, nonatomic) id<_MKTransitConnectionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

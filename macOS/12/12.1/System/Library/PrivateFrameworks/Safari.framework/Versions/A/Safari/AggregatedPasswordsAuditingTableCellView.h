@class NSButton;
@protocol AggregatedPasswordsAuditingTableCellViewDelegate;

@interface AggregatedPasswordsAuditingTableCellView : NSTableCellView

@property (weak, nonatomic) NSButton *auditingButton;
@property (weak, nonatomic) id<AggregatedPasswordsAuditingTableCellViewDelegate> delegate;
@property (nonatomic, getter=isShowingAuditingButton) BOOL showsAuditingButton;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)buttonWasClicked:(id)a0;

@end

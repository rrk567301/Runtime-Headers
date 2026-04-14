@interface SearchUIRequestUserReportHandler : SearchUICommandHandler

+ (void)didSelectFeedbackPunchout:(id)a0 rowModel:(id)a1 feedbackDelegate:(id)a2;
+ (id)fallbackCommandForRowModel:(id)a0 environment:(id)a1;

- (unsigned long long)destination;
- (id)contextMenu;
- (id)defaultSymbolName;
- (BOOL)prefersContextMenu;
- (BOOL)prefersModalPresentation;

@end

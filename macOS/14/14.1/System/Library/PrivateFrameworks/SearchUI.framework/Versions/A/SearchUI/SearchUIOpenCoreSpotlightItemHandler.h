@class SFOpenCoreSpotlightItemCommand;

@interface SearchUIOpenCoreSpotlightItemHandler : SearchUIOpenUserActivityHandler

@property (readonly) SFOpenCoreSpotlightItemCommand *command;

- (void)getUserActivityForCommand:(id)a0 environment:(id)a1 completionHandler:(id /* block */)a2;
- (id)previewItem;

@end

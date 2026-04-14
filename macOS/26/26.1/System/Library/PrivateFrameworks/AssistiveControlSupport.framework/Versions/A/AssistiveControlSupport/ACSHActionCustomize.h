@class NSURL, NSString;

@interface ACSHActionCustomize : ACSHAction

@property (retain) NSURL *panelCollectionURL;
@property (retain) NSString *panelUUID;
@property BOOL customizeToolbarOrdering;

- (void).cxx_destruct;
- (id)init;
- (id)dictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end

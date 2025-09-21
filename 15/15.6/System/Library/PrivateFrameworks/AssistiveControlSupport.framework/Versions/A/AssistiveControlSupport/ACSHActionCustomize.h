@class NSURL, NSString;

@interface ACSHActionCustomize : ACSHAction

@property (retain) NSURL *panelCollectionURL;
@property (retain) NSString *panelUUID;
@property char customizeToolbarOrdering;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryForSaving;
- (void)performWithEventSourceData:(id)a0;

@end

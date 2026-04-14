@class NSString;

@interface CADCoreSpotlightIndexProvider : NSObject <CADSpotlightIndexProvider>

@property (readonly, nonatomic) BOOL donateCalendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)newSpotlightIndexForBundleID:(id)a0;

@end

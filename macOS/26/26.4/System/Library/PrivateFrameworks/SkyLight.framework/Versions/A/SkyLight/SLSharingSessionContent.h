@class NSDictionary, SLWindowFilter, NSNumber;

@interface SLSharingSessionContent : NSObject

@property (retain) NSDictionary *metaData;
@property (retain) SLWindowFilter *filter;
@property (retain) NSNumber *displayID;

- (id)init;
- (void)dealloc;
- (id)initWithWindowID:(id)a0;
- (id)initInternal:(id)a0 display:(id)a1;
- (id)initWithDisplayID:(id)a0;

@end

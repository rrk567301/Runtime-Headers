@class CalendarEventClassificationModel, SRResources, NSObject;
@protocol OS_dispatch_queue;

@interface CalendarEventClassificationModelManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL isLoaded;
@property (retain) CalendarEventClassificationModel *calendarEventClassificationModel;
@property (retain, nonatomic) SRResources *resources;

+ (id)sharedInstance;

- (BOOL)loadModel;
- (id)init;
- (void).cxx_destruct;
- (id)predictForReferenceItemId:(id)a0 withEmbedding:(id)a1;

@end

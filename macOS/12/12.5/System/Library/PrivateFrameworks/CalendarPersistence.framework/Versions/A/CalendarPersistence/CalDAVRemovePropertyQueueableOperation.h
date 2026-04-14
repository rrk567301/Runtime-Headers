@class NSURL, CoreDAVItem, NSString;

@interface CalDAVRemovePropertyQueueableOperation : CalDAVCalendarQueueableOperation {
    NSString *_property;
}

@property (retain) NSURL *url;
@property (retain) CoreDAVItem *propertyToRemove;

+ (void)initialize;

- (void).cxx_destruct;
- (void)performOperation;
- (id)initWithChangeRequest:(id)a0 session:(id)a1 URI:(id)a2 property:(id)a3;

@end

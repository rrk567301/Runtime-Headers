@class NSString, NSURL, NSDate;

@interface CALPublisher : NSObject {
    NSString *_key;
    NSURL *_uploadURL;
    NSURL *_pageURL;
    NSURL *_subscriptionURL;
    NSString *_publishName;
    BOOL _autoUpdate;
    BOOL _active;
    NSDate *_lastUpdate;
    int _filteringMask;
    int _publisherState;
}

+ (id)publisherWithDictionaryRepresentation:(id)a0;

- (id)init;
- (id)name;
- (void).cxx_destruct;
- (void)setName:(id)a0;
- (id)filter;
- (id)lastUpdate;
- (BOOL)isActive;
- (int)status;
- (id)publisherID;
- (id)dictionaryRepresentation;
- (void)setActive:(BOOL)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)uploadURL;
- (void)setUploadURL:(id)a0;
- (BOOL)hasCapability:(unsigned int)a0;
- (id)subscriptionURL;
- (void)setSubscriptionURL:(id)a0;
- (id)lastOperationError;
- (BOOL)isAutoUpdating;
- (void)fireParameterChangeNotification;
- (void)setPageURL:(id)a0;
- (BOOL)isEqualToPublisher:(id)a0;
- (void)fireStatusChangeNotification;
- (id)pageURL;
- (void)setPublisherState:(int)a0;
- (int)publisherState;
- (void)setFilteringMask:(int)a0;
- (int)filteringMask;

@end

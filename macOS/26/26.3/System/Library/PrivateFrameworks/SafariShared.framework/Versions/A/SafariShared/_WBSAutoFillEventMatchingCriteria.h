@class NSString, NSUUID, NSURL;

@interface _WBSAutoFillEventMatchingCriteria : NSObject

@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) double timeInterval;
@property (readonly, nonatomic) NSUUID *tabID;
@property (readonly, nonatomic) NSURL *currentURL;
@property (readonly, nonatomic) BOOL shouldAllowPrivateTabs;
@property (readonly, nonatomic) BOOL shouldRemoveMatchingEvent;
@property (readonly, nonatomic) BOOL shouldIncludeExternalCredentialEvents;
@property (readonly, nonatomic) BOOL onlyEventsWhenPasswordWasFilled;

- (void).cxx_destruct;
- (id)initWithUsername:(id)a0 timeInterval:(double)a1 tabID:(id)a2 currentURL:(id)a3 shouldAllowPrivateTabs:(BOOL)a4 shouldRemoveMatchingEvent:(BOOL)a5 shouldIncludeExternalCredentialEvents:(BOOL)a6 onlyEventsWhenPasswordWasFilled:(BOOL)a7;

@end

@class NSArray, NSString;

@interface SKDEventLogger : NSObject <SKDEventLogger> {
    NSString *_domain;
}

@property (readonly, nonatomic) NSArray *logs;
@property (readonly, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (void)flush;
- (void)logEvent:(id)a0;
- (void).cxx_destruct;
- (void)logEvent:(id)a0 level:(unsigned long long)a1;
- (BOOL)supportedEvent:(id)a0;
- (BOOL)supportedTrackingEvent:(id)a0;
- (id)trackingEventBeginWithName:(id)a0 event:(id)a1;
- (void)trackingEventEnd:(id)a0;

@end

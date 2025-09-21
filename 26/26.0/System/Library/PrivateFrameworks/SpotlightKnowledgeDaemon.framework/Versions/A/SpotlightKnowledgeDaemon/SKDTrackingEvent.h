@class NSString, NSArray;
@protocol SKDEvent;

@interface SKDTrackingEvent : NSObject <SKDTrackingEvent> {
    NSString *_name;
    NSString *_domain;
    id<SKDEvent> _event;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSArray *logs;
@property (readonly, nonatomic) id<SKDEvent> event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (readonly, copy, nonatomic) NSArray *events;

- (void)removeAllEvents;
- (void)removeEvent:(id)a0;
- (void)addEvents:(id)a0;
- (id)init;
- (void)addEvent:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

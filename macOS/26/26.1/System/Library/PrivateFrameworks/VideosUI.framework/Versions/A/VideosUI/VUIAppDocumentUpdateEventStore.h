@class NSArray, NSMutableDictionary;

@interface VUIAppDocumentUpdateEventStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventByEventDescriptor;
@property (readonly, copy, nonatomic) NSArray *events;

- (void)removeEvent:(id)a0;
- (id)description;
- (void)addEvents:(id)a0;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (id)init;

@end

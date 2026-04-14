@class SIOrderedEvent;

@interface ISTimestampedEvent : NSObject

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) SIOrderedEvent *orderedEvent;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;

@end

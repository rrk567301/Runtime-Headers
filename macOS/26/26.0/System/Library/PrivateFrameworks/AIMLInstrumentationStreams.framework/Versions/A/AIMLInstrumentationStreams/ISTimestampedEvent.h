@class SIOrderedEvent;

@interface ISTimestampedEvent : NSObject

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) SIOrderedEvent *orderedEvent;

- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;

@end

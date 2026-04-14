@class SIOrderedEvent;

@interface ISTimestampedEvent : NSObject

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) SIOrderedEvent *orderedEvent;

- (void).cxx_destruct;
- (id)init;
- (id)dictionaryRepresentation;

@end

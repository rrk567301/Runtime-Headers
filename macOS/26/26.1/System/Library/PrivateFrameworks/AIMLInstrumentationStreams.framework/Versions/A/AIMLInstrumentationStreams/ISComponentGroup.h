@class NSArray, ISComponentIdentifier;

@interface ISComponentGroup : NSObject {
    void /* unknown type, empty encoding */ eventsInternal;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) ISComponentIdentifier *componentIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEventsBridge:(id)a0;

@end

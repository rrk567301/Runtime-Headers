@class NSArray, SIComponentIdentifier;

@interface AIMLISComponentGroup : NSObject {
    void /* unknown type, empty encoding */ eventsInternal;
}

@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) SIComponentIdentifier *componentIdentifier;

- (id)init;
- (void).cxx_destruct;

@end

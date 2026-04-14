@class NSString, NSArray;

@interface WSUberEventProcessor : NSObject <CPXEventProcessor> {
    NSArray *eventProcessorFamily;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

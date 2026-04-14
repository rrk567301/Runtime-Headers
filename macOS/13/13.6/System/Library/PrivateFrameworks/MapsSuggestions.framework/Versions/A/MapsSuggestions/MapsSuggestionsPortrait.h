@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsPortrait : NSObject <MapsSuggestionsObject> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initFromResourceDepot:(id)a0;

@end

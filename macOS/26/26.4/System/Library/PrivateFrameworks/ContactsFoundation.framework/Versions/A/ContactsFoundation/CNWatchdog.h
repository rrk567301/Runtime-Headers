@class NSString, CNCache;
@protocol CNWatchdog;

@interface CNWatchdog : NSObject <CNWatchdog> {
    CNCache *_events;
}

@property (class, readonly) id<CNWatchdog> defaultWatchdog;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)statusForEvent:(id)a0;
- (void)recordExceptionForEvent:(id)a0;
- (void)setStatus:(unsigned long long)a0 forEvent:(id)a1;

@end

@class NSString;

@interface ATXMediaNowPlayingStream : NSObject <ATXGenericEventStreamBase>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_publisherWithStartDate:(id)a0 endDate:(id)a1 shouldReverse:(BOOL)a2;
- (BOOL)_shouldPairStartEvent:(id)a0 withEndEvent:(id)a1;
- (long long)atxPlaybackStateFromBMPlaybackState:(int)a0;
- (void)enumerateEventsFromStartDate:(id)a0 endDate:(id)a1 filterBlock:(id /* block */)a2 ascending:(BOOL)a3 block:(id /* block */)a4;
- (id)getATXMediaNowPlayingEventFromBiomeEvent:(id)a0;

@end

@class NSObject, AVWeakReference, NSMutableArray, AVWeakReferencingDelegateStorage;
@protocol OS_dispatch_queue;

@interface AVMetricEventStream : NSObject {
    struct __CFDictionary { } *_publisherByEventTimeline;
    struct __CFArray { } *_eventTimelines;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSMutableArray *_metricEventClassesToSubscribe;
    BOOL _shouldSubscribeToAllMetricEventClasses;
    AVWeakReference *_weakSelf;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

+ (id)eventStream;
+ (id)contentKeyRequestEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)downloadSummaryEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)errorEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)initialLikelyToKeepUpEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)likelyToKeepUpEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)mediaSegmentRequestEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)metricEventForFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)playbackSummaryEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)playlistRequestEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)rateChangeEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)resourceRequestEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)seekDidCompleteEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)seekEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)stallEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)variantChangeEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;
+ (id)variantChangeStartEventWithFigMetricEvent:(struct OpaqueFigMetricEvent { } *)a0;

- (void)dealloc;
- (id)init;
- (BOOL)addPublisher:(id)a0;
- (void)addPublisher:(id)a0 eventTimeline:(struct OpaqueFigMetricEventTimeline { } *)a1;
- (void)didReceiveEventForMetricEventTimeline:(struct OpaqueFigMetricEventTimeline { } *)a0 event:(struct OpaqueFigMetricEvent { } *)a1;
- (long long)getFigMetricEventIDForAVMetricClass:(Class)a0;
- (BOOL)setSubscriber:(id)a0 queue:(id)a1;
- (void)subscribeToAllMetricEvents;
- (void)subscribeToMetricEvent:(Class)a0;
- (void)subscribeToMetricEvents:(id)a0;

@end

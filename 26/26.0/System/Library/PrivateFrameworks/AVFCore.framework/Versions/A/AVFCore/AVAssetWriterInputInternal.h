@class AVKeyPathDependencyManager, AVWeakReference, AVAssetWriterInputHelper, AVAssetWriterInputPassDescriptionResponder, NSObject, AVFigAssetWriterTrack;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputInternal : NSObject {
    AVWeakReference *weakReference;
    AVAssetWriterInputHelper *helper;
    AVFigAssetWriterTrack *assetWriterTrack;
    NSObject<OS_dispatch_queue> *helperQueue;
    AVWeakReference *weakReferenceToAttachedAdaptor;
    AVWeakReference *weakReferenceToAssetWriter;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    long long numberOfAppendFailures;
    BOOL markAsFinishedCalled;
    NSObject<OS_dispatch_queue> *appendFailureReadWriteQueue;
    AVAssetWriterInputPassDescriptionResponder *passDescriptionResponder;
    BOOL hasReceiver;
}

@end

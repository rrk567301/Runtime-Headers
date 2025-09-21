@class NSArray, AVWeakReference, NSString, NSDictionary, NSMutableArray;

@interface AVCaptureAudioFileOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSMutableArray *recordingDelegatesArray;
    NSArray *availableOutputFileTypes;
    NSString *lastFileType;
    NSArray *metadata;
    NSDictionary *audioSettings;
    char recording;
    char paused;
}

- (void)dealloc;
- (id)init;

@end

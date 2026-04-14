@class NSProgress;

@interface PLBackgroundJobFeatureAvailabilityWorkItem : NSObject <NSCopying> {
    NSProgress *_progress;
}

@property (readonly) NSProgress *progress;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end

@class NSProgress;

@interface PLBackgroundJobFeatureAvailabilityWorkItem : NSObject <NSCopying> {
    NSProgress *_progress;
}

@property (readonly) NSProgress *progress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end

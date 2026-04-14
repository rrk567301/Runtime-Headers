@class _PSBackgroundProcessingMetrics, _CDInteractionStore, NSDate;

@interface _PSBackgroundProcessingTask : NSObject {
    _CDInteractionStore *_interactionStore;
    NSDate *_bookmark;
    _PSBackgroundProcessingMetrics *_metrics;
}

+ (id)interactionStore;
+ (BOOL)attachmentsInObject:(id)a0 hasField:(id)a1;
+ (id)savedBookmark;
+ (BOOL)updateInteractionWithPhotoFeatures:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)handleRepeatingTask:(id)a0;
- (void)saveBookmark;
- (BOOL)updatePlistWithDict:(id)a0;

@end

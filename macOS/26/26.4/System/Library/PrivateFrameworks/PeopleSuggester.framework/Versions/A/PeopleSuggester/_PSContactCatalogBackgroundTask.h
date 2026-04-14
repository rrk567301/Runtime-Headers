@class _PSContactCatalogTaskMetrics, _CDInteractionStore, NSDate;

@interface _PSContactCatalogBackgroundTask : NSObject {
    _CDInteractionStore *_interactionStore;
    NSDate *_lastRunDate;
    _PSContactCatalogTaskMetrics *_metrics;
}

+ (id)interactionStore;
+ (id)savedLastRunDate;

- (void).cxx_destruct;
- (id)init;
- (void)saveLastRunDate;
- (void)handleRepeatingTask:(id)a0;
- (BOOL)updatePlistWithDict:(id)a0;

@end

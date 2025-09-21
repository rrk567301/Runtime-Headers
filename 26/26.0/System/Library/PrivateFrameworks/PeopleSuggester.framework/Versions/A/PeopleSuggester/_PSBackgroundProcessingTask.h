@class _CDInteractionStore, NSDate;

@interface _PSBackgroundProcessingTask : NSObject {
    _CDInteractionStore *_interactionStore;
    NSDate *_bookmark;
}

+ (id)interactionStore;
+ (BOOL)attachmentsInObject:(id)a0 hasField:(id)a1;
+ (id)savedBookmark;
+ (void)updateInteractionWithPhotoFeatures:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)handleRepeatingTask:(id)a0;
- (void)saveBookmark;
- (BOOL)updatePlistWithDict:(id)a0;

@end

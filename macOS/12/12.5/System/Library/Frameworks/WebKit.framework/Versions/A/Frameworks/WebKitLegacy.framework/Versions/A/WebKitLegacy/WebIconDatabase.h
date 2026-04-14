@class WebIconDatabasePrivate;

@interface WebIconDatabase : NSObject {
    WebIconDatabasePrivate *_private;
}

+ (void)initialize;
+ (id)sharedIconDatabase;
+ (void)delayDatabaseCleanup;
+ (void)allowDatabaseCleanup;

- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)defaultIconWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)iconForURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)iconForURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 cache:(BOOL)a2;
- (id)defaultIconForURL:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)iconURLForURL:(id)a0;
- (void)retainIconForURL:(id)a0;
- (void)releaseIconForURL:(id)a0;

@end

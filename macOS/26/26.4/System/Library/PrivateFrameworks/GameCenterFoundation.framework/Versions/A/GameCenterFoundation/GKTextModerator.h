@class NSLocale;

@interface GKTextModerator : NSObject {
    void /* unknown type, empty encoding */ implementation;
}

@property (class, nonatomic, readonly) GKTextModerator *localeAgnosticTextModerator;
@property (class, nonatomic, readonly) GKTextModerator *defaultTextModerator;

@property (nonatomic, readonly) NSLocale *locale;

+ (BOOL)isAvailable;
+ (id)forLocale:(id)a0;
+ (BOOL)isAvailableForLocale:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldFilter:(id)a0;

@end

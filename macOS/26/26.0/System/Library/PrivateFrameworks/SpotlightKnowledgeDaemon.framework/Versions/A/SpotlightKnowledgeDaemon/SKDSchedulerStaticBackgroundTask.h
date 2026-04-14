@class NSString;

@interface SKDSchedulerStaticBackgroundTask : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ isRepeating;
}

@property (class, nonatomic, readonly) SKDSchedulerStaticBackgroundTask *metrics;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end

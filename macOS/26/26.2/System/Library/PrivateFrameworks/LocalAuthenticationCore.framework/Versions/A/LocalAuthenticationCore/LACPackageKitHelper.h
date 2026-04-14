@class NSDate;

@interface LACPackageKitHelper : NSObject {
    NSDate *_lastSystemUpdate;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_determineLastSystemUpdateWithHistoryItem:(id)a0;
- (double)timeIntervalSinceLastSystemUpdate;

@end

@class RSOrthographicDetector;

@interface RSDoorWindowOfflineDetector : NSObject {
    RSOrthographicDetector *_doorWindowDetector;
    BOOL _isCurvedWindowDoorEnabled;
}

- (void).cxx_destruct;
- (id)init;

@end

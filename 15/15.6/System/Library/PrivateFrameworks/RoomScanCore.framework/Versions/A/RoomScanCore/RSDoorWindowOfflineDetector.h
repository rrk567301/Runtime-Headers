@class RSOrthographicDetector;

@interface RSDoorWindowOfflineDetector : NSObject {
    RSOrthographicDetector *_doorWindowDetector;
    char _isCurvedWindowDoorEnabled;
}

- (id)init;
- (void).cxx_destruct;

@end

@class NSArray;

@interface AVCapturePhotoBracketSettingsInternal : NSObject {
    NSArray *bracketedSettings;
    char lensStabilizationEnabled;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

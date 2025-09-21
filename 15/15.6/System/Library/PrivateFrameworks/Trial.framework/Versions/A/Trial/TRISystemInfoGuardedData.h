@class TRISystemInfo;

@interface TRISystemInfoGuardedData : NSObject {
    char isStale;
    TRISystemInfo *systemInfo;
}

- (void).cxx_destruct;

@end

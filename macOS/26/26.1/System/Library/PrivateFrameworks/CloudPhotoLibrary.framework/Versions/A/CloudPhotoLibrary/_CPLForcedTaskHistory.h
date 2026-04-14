@class NSString, NSDate;

@interface _CPLForcedTaskHistory : NSObject {
    BOOL _discarded;
    NSDate *_creationDate;
    NSString *_simpleDescription;
    Class _taskClass;
    NSString *_errorDescription;
}

- (void).cxx_destruct;

@end

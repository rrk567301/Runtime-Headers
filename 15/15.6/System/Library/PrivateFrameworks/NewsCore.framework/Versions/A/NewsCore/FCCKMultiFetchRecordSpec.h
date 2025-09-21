@class NSString, NSArray;

@interface FCCKMultiFetchRecordSpec : NSObject {
    char _shortcut;
    NSString *_recordType;
    NSArray *_desiredKeys;
    NSArray *_fetchKeys;
}

- (void).cxx_destruct;

@end

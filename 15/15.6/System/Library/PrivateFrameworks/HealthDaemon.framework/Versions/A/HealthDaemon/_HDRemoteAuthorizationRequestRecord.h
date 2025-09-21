@class NSString, NSError, NSMutableArray;

@interface _HDRemoteAuthorizationRequestRecord : NSObject {
    char _didRecieveShouldPrompt;
    char _shouldPrompt;
    NSString *_bundleID;
    NSString *_hostAppName;
    NSError *_shouldPromptError;
    NSMutableArray *_records;
}

- (void).cxx_destruct;

@end

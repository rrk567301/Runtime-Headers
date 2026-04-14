@class RejectedTypes, NSArray, NSString;

@interface Retrieval : NSObject {
    void /* function */ enabledTasks;
    void /* function */ enabledItemKinds;
    void /* function */ taggerType;
}

@property (nonatomic, readonly) long long maxNumEnrolled;
@property (nonatomic, readonly) double retrievalTimeout;
@property (nonatomic, readonly) double processingTimeout;
@property (nonatomic, readonly) long long maxEntityChars;
@property (nonatomic, readonly) long long maxEntityWords;
@property (nonatomic, readonly) RejectedTypes *rejectedTypes;
@property (nonatomic, readonly) NSArray *enabledTasks;
@property (nonatomic, readonly) NSArray *enabledItemKinds;
@property (nonatomic, readonly) NSString *taggerType;

- (void).cxx_destruct;

@end

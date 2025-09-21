@class NSString;

@interface AMSAutoBugCaptureReportResponse : NSObject {
    void /* function */ sessionID;
    void /* function */ groupID;
}

@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSString *groupID;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 groupID:(id)a1;

@end

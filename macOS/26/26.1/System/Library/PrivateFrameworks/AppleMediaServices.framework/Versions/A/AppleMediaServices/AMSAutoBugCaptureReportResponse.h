@class NSString;

@interface AMSAutoBugCaptureReportResponse : NSObject {
    void /* function */ sessionID;
    void /* function */ groupID;
}

@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSString *groupID;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSessionID:(id)a0 groupID:(id)a1;

@end

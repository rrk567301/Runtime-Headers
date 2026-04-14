@class NSString, NSData;

@interface BlastDoorTrustKitSpamReport : NSObject {
    void /* unknown type, empty encoding */ trustKitSpamReport;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long requestReason;
@property (nonatomic, readonly) NSData *metadata;

- (void).cxx_destruct;
- (id)init;

@end

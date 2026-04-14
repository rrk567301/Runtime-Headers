@interface SCUpdateAppReviewRequestLastSeenDateCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ appReviewRequestLastSeenDate;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)executeWithZone:(id)a0;

@end

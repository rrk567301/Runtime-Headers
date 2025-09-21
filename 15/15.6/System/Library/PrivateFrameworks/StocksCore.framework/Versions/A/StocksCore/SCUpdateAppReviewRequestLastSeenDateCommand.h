@interface SCUpdateAppReviewRequestLastSeenDateCommand : NSObject <SCWZoneCommand> {
    void /* unknown type, empty encoding */ appReviewRequestLastSeenDate;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)executeWithZone:(id)a0;

@end

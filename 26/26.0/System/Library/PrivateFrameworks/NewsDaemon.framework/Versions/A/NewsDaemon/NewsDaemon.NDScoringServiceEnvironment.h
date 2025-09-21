@interface NewsDaemon.NDScoringServiceEnvironment : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ computeServiceBaseURL;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSString;

@interface SKERankedUserParse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ userParse;
    void /* unknown type, empty encoding */ pegasusResponse;
    void /* unknown type, empty encoding */ confidenceScore;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

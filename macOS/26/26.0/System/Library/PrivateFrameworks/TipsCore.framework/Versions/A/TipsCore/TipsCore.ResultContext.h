@class NSString;

@interface TipsCore.ResultContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ resultId;
    void /* unknown type, empty encoding */ contextData;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

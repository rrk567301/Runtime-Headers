@class NSString;

@interface WFToolKitIndexingRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ reasons;
    void /* unknown type, empty encoding */ overrideLocalizations;
    void /* unknown type, empty encoding */ retryCount;
    void /* unknown type, empty encoding */ testingConfig;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end

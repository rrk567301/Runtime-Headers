@class NSString;

@interface VoiceActions.VANameDetectionResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ keyword;
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ secondPassResult;
    void /* unknown type, empty encoding */ filename;
    void /* unknown type, empty encoding */ isValid;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

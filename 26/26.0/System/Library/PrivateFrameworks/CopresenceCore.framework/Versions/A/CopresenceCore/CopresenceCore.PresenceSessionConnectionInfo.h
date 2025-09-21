@class NSString;

@interface CopresenceCore.PresenceSessionConnectionInfo : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ endpoint;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

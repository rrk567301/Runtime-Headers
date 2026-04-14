@class NSString;

@interface CopresenceCore.PresenceSessionConnectionInfo : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ endpoint;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

@class NSString;

@interface CopresenceCore.PresenceSessionConnectionInfo : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ endpoint;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

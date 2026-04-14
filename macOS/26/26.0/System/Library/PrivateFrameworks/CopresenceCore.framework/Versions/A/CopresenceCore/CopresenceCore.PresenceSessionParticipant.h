@class NSString;

@interface CopresenceCore.PresenceSessionParticipant : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ isCurrentDevice;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

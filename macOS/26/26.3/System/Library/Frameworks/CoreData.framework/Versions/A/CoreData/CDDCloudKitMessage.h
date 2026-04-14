@class NSUUID;

@interface CDDCloudKitMessage : NSObject <NSCoding, NSSecureCoding> {
    NSUUID *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;

@end

@class CDDCloudKitMessage, NSError;

@interface CDDCloudKitResponse : NSObject <NSCoding, NSSecureCoding> {
    char _success;
    CDDCloudKitMessage *_message;
    NSError *_error;
}

@property (class, readonly) char supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

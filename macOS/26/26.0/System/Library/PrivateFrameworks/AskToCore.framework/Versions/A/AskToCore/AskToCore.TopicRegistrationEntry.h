@interface AskToCore.TopicRegistrationEntry : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ topic;
    void /* unknown type, empty encoding */ responseListenerID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

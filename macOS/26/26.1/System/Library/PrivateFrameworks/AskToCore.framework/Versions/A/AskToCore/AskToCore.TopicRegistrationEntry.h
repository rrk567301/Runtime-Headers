@interface AskToCore.TopicRegistrationEntry : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ topic;
    void /* unknown type, empty encoding */ responseListenerID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)init;

@end

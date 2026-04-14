@interface BlastDoor.MentionEventSecureCoding : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ mentionEvent;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

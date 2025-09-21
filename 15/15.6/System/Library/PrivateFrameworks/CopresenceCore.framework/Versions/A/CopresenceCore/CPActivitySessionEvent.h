@interface CPActivitySessionEvent : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ originatorID;
    void /* unknown type, empty encoding */ queueItemType;
    void /* unknown type, empty encoding */ url;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

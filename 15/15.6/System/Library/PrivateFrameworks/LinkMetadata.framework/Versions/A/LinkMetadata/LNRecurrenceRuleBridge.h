@class NSData;

@interface LNRecurrenceRuleBridge : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ data;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) NSData *data;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;

@end

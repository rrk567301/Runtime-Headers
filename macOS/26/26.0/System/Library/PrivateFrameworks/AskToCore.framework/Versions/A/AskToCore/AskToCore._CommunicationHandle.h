@class NSString;

@interface AskToCore._CommunicationHandle : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ value;
    void /* unknown type, empty encoding */ kind;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSData;

@interface RTIDataPayload : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long version;

+ (id)payloadWithData:(id)a0;
+ (id)payloadWithData:(id)a0 version:(unsigned long long)a1;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 version:(unsigned long long)a1;

@end

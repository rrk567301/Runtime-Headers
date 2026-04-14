@class NSData;

@interface RTIDataPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long version;

+ (id)payloadWithData:(id)a0 version:(unsigned long long)a1;
+ (id)payloadWithData:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 version:(unsigned long long)a1;

@end

@class NSData;

@interface STSReaderCryptarch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long curve;
@property (readonly, nonatomic) unsigned long long variant;
@property (readonly, nonatomic) NSData *privateKey;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCurve:(unsigned long long)a0 variant:(unsigned long long)a1 privateKey:(id)a2;

@end

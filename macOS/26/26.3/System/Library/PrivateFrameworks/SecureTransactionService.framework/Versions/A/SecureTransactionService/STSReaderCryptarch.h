@class NSData;

@interface STSReaderCryptarch : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long curve;
@property (readonly, nonatomic) unsigned long long variant;
@property (readonly, nonatomic) NSData *privateKey;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCurve:(unsigned long long)a0 variant:(unsigned long long)a1 privateKey:(id)a2;

@end

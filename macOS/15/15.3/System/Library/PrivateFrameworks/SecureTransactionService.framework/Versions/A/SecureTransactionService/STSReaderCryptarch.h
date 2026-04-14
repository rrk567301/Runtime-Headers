@class NSData;

@interface STSReaderCryptarch : NSObject

@property (readonly, nonatomic) unsigned long long curve;
@property (readonly, nonatomic) unsigned long long variant;
@property (readonly, nonatomic) NSData *privateKey;

- (void).cxx_destruct;
- (id)initWithCurve:(unsigned long long)a0 variant:(unsigned long long)a1 privateKey:(id)a2;

@end

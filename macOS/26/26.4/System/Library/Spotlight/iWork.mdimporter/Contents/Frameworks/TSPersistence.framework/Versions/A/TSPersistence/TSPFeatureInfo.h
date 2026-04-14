@class NSString;

@interface TSPFeatureInfo : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) unsigned long long writeVersion;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithIdentifier:(id)a0 readVersion:(unsigned long long)a1 writeVersion:(unsigned long long)a2 validatingValues:(BOOL)a3;

@end

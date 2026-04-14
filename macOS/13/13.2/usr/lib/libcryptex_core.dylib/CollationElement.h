@class NSString;

@interface CollationElement : NSObject

@property (nonatomic) unsigned long long cle_scope;
@property (retain, nonatomic) NSString *cle_bundle_id;
@property (retain, nonatomic) NSString *cle_mnt_path;

+ (id)scopeToString:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)package;
- (id)initWithXPC:(id)a0;
- (id)initWithBundle:(id)a0 atPath:(id)a1 withScope:(unsigned long long)a2;

@end

@class NSString;

@interface CollationElement : NSObject

@property (readonly, nonatomic) unsigned long long cle_scope;
@property (readonly, retain, nonatomic) NSString *cle_bundle_id;
@property (readonly, retain, nonatomic) NSString *cle_bundle_version;
@property (readonly, retain, nonatomic) NSString *cle_mnt_path;

+ (id)scopeToString:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)package;
- (id)initWithXPC:(id)a0;
- (id)initWithBundle:(id)a0 version:(id)a1 atPath:(id)a2 withScope:(unsigned long long)a3;

@end

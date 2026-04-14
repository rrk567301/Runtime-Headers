@class NSString;

@interface CollationElement : NSObject

@property (readonly, nonatomic) long long cle_scope;
@property (readonly, retain, nonatomic) NSString *cle_bundle_id;
@property (readonly, retain, nonatomic) NSString *cle_bundle_version;
@property (readonly, retain, nonatomic) NSString *cle_mnt_path;

+ (id)scopeToString:(long long)a0;

- (id)description;
- (void).cxx_destruct;
- (id)package;
- (id)initWithXPC:(id)a0;
- (id)copyAbsolutePath:(id)a0;
- (id)initWithBundle:(id)a0 version:(id)a1 atPath:(id)a2 withScope:(long long)a3;

@end

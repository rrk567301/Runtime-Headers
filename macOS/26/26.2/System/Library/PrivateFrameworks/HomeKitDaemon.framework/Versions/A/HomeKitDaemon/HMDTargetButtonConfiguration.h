@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;

- (id)shortDescription;
- (unsigned long long)hash;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)buttonName;

@end

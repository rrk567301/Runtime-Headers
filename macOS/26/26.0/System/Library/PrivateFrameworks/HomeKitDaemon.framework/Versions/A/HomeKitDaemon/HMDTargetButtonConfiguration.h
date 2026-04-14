@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;

- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)buttonName;

@end

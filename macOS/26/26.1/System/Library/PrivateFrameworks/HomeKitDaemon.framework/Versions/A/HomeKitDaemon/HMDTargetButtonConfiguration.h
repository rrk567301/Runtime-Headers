@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;

- (unsigned long long)hash;
- (id)shortDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)buttonName;

@end

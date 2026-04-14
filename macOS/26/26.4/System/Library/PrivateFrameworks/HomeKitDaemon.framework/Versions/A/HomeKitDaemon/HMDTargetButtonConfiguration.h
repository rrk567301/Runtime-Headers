@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;

- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)buttonName;

@end

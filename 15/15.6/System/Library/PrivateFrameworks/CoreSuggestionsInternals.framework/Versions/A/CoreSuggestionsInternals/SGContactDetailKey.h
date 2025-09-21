@class NSString, SGIdentityKey;

@interface SGContactDetailKey : NSObject <SGEntityKey>

@property (readonly, nonatomic) SGIdentityKey *identityKey;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSupportedEntityType:(long long)a0;
+ (id)prefixForForIdentityKey:(id)a0;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithIdentityKey:(id)a0 label:(id)a1 normalizedValue:(id)a2;
- (id)initWithSerialized:(id)a0;
- (char)isEqualToContactDetailKey:(id)a0;

@end

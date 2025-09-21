@class NSString;

@interface NSNumberingSystem : NSObject

@property (copy) NSString *identifier;
@property char isAlgorithmic;
@property long long radix;
@property (copy) NSString *descriptor;

+ (id)numberingSystemWithNumberingSystemName:(const char *)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocaleIdentifier:(id)a0;
- (id)initWithIdentifier:(id)a0 isAlgorithmic:(char)a1 radix:(long long)a2 descriptor:(id)a3;
- (id)initWithNumberingSystemIdentifier:(id)a0;

@end

@class NSSet;

@interface RWIDriverState : NSObject <NSCopying>

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSSet *sessionIdentifiers;

+ (id)active;
+ (id)inactive;
+ (BOOL)isValidPayload:(id)a0;
+ (id)decodeFromPayload:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)encodeToPayload:(id)a0;

@end

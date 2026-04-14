@class NSString, NSArray;

@interface AVContentProtectionConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *contentKeySystem;
@property (readonly, copy, nonatomic) NSArray *keyIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithContentKeySystem:(id)a0 keyIdentifiers:(id)a1;

@end

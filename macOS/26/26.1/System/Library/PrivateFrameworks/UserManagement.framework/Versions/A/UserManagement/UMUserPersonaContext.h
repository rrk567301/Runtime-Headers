@class NSObject;
@protocol OS_voucher;

@interface UMUserPersonaContext : NSObject <NSCopying> {
    NSObject<OS_voucher> *_voucher;
}

+ (id)currentPersonaContext;

- (void).cxx_destruct;
- (void)contextAdopt;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyPersonaContext:(id *)a0;
- (id)init;

@end

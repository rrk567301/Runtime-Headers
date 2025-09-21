@class NSObject;
@protocol OS_voucher;

@interface UMUserPersonaContext : NSObject <NSCopying> {
    NSObject<OS_voucher> *_voucher;
}

+ (id)currentPersonaContext;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyPersonaContext:(id *)a0;
- (id)init;
- (void)contextAdopt;
- (void).cxx_destruct;

@end

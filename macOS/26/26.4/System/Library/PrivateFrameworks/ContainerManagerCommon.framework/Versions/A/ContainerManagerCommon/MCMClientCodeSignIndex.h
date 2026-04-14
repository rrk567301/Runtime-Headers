@class NSData, NSString;

@interface MCMClientCodeSignIndex : NSObject <NSCopying> {
    NSData *_cdhash;
    NSString *_identifier;
}

- (BOOL)isEqualToClientCodeSignIndex:(id)a0;
- (id)initWithCDHash:(id)a0 identifier:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end

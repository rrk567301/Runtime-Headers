@class NSData, NSString;

@interface MCMClientCodeSignIndex : NSObject <NSCopying> {
    NSData *_cdhash;
    NSString *_identifier;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCDHash:(id)a0 identifier:(id)a1;
- (char)isEqualToClientCodeSignIndex:(id)a0;

@end

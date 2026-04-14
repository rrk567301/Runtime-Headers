@class OADBlipRef;

@interface OADImageBulletProperties : OADBulletProperties {
    OADBlipRef *mImage;
}

- (id)image;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBlipRef:(id)a0;

@end

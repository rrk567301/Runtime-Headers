@interface OADTextBodyAutoFit : NSObject {
    unsigned char mType;
}

- (unsigned char)type;
- (unsigned long long)hash;
- (id)initWithType:(unsigned char)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end

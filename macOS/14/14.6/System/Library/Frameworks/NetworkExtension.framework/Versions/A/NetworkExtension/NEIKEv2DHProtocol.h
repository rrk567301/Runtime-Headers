@interface NEIKEv2DHProtocol : NSObject <NSCopying> {
    unsigned long long _group;
}

@property (readonly) unsigned long long group;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithGroup:(unsigned long long)a0;

@end

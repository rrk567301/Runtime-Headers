@interface MUISearchRequestID : NSObject {
    unsigned int _underlying;
}

- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToID:(id)a0;

@end

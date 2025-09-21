@class NSObject;
@protocol NSCopying;

@interface VMUDomtreeName : NSObject <NSCopying> {
    NSObject<NSCopying> *_elements[6];
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asArray;
- (id)initWithDict:(id)a0;
- (id)initWithArray:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSObject;
@protocol NSCopying;

@interface VMUDomtreeName : NSObject <NSCopying> {
    NSObject<NSCopying> *_elements[6];
}

- (unsigned long long)hash;
- (id)asArray;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDict:(id)a0;

@end

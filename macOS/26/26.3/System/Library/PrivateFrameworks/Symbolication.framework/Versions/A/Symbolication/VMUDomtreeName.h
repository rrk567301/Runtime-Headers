@class NSObject;
@protocol NSCopying;

@interface VMUDomtreeName : NSObject <NSCopying> {
    NSObject<NSCopying> *_elements[6];
}

- (id)initWithDict:(id)a0;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)asArray;

@end

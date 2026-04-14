@class NSString, NSData, CUINamedData;

@interface NSDataAsset : NSObject <NSCopying> {
    CUINamedData *_namedData;
}

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSString *typeIdentifier;

+ (id)_namedDataPrivateAccessorWithName:(id)a0 bundle:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 bundle:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (void)dealloc;

@end

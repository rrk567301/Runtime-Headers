@class IKImageWrapper;

@interface IKCacheDatabaseUIDInfo : NSObject {
    IKImageWrapper *_image;
    unsigned long long _version;
    unsigned long long _index;
    BOOL _invalid;
}

- (void)setIndex:(unsigned long long)a0;
- (void)setIsValid:(BOOL)a0;
- (void)setVersion:(unsigned long long)a0;
- (unsigned long long)index;
- (void)setImage:(id)a0;
- (void)dealloc;
- (id)image;
- (BOOL)isValid;
- (unsigned long long)version;

@end

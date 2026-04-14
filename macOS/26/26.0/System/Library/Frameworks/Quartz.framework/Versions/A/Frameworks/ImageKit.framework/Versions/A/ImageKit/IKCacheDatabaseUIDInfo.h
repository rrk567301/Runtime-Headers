@class IKImageWrapper;

@interface IKCacheDatabaseUIDInfo : NSObject {
    IKImageWrapper *_image;
    unsigned long long _version;
    unsigned long long _index;
    BOOL _invalid;
}

- (void)setIndex:(unsigned long long)a0;
- (void)setIsValid:(BOOL)a0;
- (unsigned long long)index;
- (BOOL)isValid;
- (void)dealloc;
- (void)setImage:(id)a0;
- (unsigned long long)version;
- (id)image;
- (void)setVersion:(unsigned long long)a0;

@end

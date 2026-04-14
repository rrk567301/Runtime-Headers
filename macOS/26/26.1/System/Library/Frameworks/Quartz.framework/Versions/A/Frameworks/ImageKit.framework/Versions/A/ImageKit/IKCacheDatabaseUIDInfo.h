@class IKImageWrapper;

@interface IKCacheDatabaseUIDInfo : NSObject {
    IKImageWrapper *_image;
    unsigned long long _version;
    unsigned long long _index;
    BOOL _invalid;
}

- (void)setIsValid:(BOOL)a0;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)a0;
- (void)setVersion:(unsigned long long)a0;
- (unsigned long long)version;
- (id)image;
- (void)setImage:(id)a0;
- (void)dealloc;
- (BOOL)isValid;

@end

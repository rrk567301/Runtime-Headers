@class IKImageWrapper;

@interface IKCacheDatabaseUIDInfo : NSObject {
    IKImageWrapper *_image;
    unsigned long long _version;
    unsigned long long _index;
    BOOL _invalid;
}

- (unsigned long long)index;
- (void)setImage:(id)a0;
- (void)setVersion:(unsigned long long)a0;
- (id)image;
- (BOOL)isValid;
- (unsigned long long)version;
- (void)setIsValid:(BOOL)a0;
- (void)setIndex:(unsigned long long)a0;
- (void)dealloc;

@end

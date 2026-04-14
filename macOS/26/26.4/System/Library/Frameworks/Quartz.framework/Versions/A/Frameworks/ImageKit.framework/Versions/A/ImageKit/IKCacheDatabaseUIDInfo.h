@class IKImageWrapper;

@interface IKCacheDatabaseUIDInfo : NSObject {
    IKImageWrapper *_image;
    unsigned long long _version;
    unsigned long long _index;
    BOOL _invalid;
}

- (id)image;
- (void)setIndex:(unsigned long long)a0;
- (void)setImage:(id)a0;
- (unsigned long long)index;
- (BOOL)isValid;
- (unsigned long long)version;
- (void)setVersion:(unsigned long long)a0;
- (void)setIsValid:(BOOL)a0;
- (void)dealloc;

@end

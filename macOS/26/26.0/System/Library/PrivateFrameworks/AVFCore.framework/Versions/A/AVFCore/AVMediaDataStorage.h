@class AVMediaDataStorageInternal;

@interface AVMediaDataStorage : NSObject {
    AVMediaDataStorageInternal *_mediaDataStorageInternal;
}

- (id)initWithURL:(id)a0 options:(id)a1;
- (id)URL;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

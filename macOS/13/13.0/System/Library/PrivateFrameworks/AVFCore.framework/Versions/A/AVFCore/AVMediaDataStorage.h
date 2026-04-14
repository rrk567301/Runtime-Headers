@class AVMediaDataStorageInternal;

@interface AVMediaDataStorage : NSObject {
    AVMediaDataStorageInternal *_mediaDataStorageInternal;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:(id)a0 options:(id)a1;

@end

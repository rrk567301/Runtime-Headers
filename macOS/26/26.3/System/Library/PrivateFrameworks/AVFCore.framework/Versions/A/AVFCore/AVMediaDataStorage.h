@class AVMediaDataStorageInternal;

@interface AVMediaDataStorage : NSObject {
    AVMediaDataStorageInternal *_mediaDataStorageInternal;
}

- (id)description;
- (id)init;
- (id)URL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 options:(id)a1;

@end

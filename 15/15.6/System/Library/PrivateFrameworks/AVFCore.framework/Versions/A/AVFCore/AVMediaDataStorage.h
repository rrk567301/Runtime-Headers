@class AVMediaDataStorageInternal;

@interface AVMediaDataStorage : NSObject {
    AVMediaDataStorageInternal *_mediaDataStorageInternal;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)URL;
- (id)initWithURL:(id)a0 options:(id)a1;

@end

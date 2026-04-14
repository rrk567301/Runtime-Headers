@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {
    unsigned long long _fileID;
}

@property (retain) GSAddition *addition;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithAddition:(id)a0;
- (BOOL)isStillValid;

@end

@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {
    unsigned long long _fileID;
}

@property (retain) GSAddition *addition;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddition:(id)a0;
- (char)isStillValid;

@end

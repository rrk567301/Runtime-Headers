@class NSUUID;

@interface RSKeyframeMeta : NSObject <NSCopying> {
    NSUUID *_identifier;
    unsigned long long _size;
    double _timestamp;
    struct { void /* unknown type, empty encoding */ columns[4]; } _cameraPose;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;

@end

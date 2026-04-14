@class Pod;

@interface BreadCrumbController : NSObject {
    struct { unsigned int sig; unsigned short version; unsigned short numberCrumbs; unsigned short crumbSize; } _headerRec;
    Pod *_pod;
    unsigned char _mode;
}

- (void)dealloc;
- (id)initWithPod:(id)a0 mode:(unsigned char)a1;
- (id)breadCrumbs;
- (id)newBreadCrumb;
- (int)readHeader;
- (int)writeHeader;

@end

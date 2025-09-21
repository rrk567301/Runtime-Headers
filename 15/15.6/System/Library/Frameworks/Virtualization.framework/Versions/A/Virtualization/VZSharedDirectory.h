@class NSURL;

@interface VZSharedDirectory : NSObject {
    unsigned long long _uniqueID;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) char readOnly;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 readOnly:(char)a1;

@end

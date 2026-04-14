@class NSURL;

@interface _VZDiskImageDescriptor : NSObject {
    long long _cachingMode;
    long long _synchronizationMode;
}

@property (copy) NSURL *URL;
@property (getter=isReadOnly) BOOL readOnly;
@property long long cachingMode;
@property long long synchronizationMode;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;

@end

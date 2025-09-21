@class NSString;

@interface _GCSystemButtonResponder : NSObject <NSObject> {
    _Atomic BOOL _invalid;
    NSString *_bundleIdentifier;
}

@property (readonly, getter=isInvalid) BOOL invalid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end

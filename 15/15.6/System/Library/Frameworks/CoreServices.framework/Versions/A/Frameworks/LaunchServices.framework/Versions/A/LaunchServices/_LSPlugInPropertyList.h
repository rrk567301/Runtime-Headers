@class NSDictionary, _LSLazyPropertyList;

@interface _LSPlugInPropertyList : _LSLazyPropertyList {
    _LSLazyPropertyList *_infoPlist;
    _LSLazyPropertyList *_sdkPlist;
    NSDictionary *_mergedPlist;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mergeLock;
}

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_getPropertyList:(id *)a0;
- (char)_getValue:(id *)a0 forPropertyListKey:(id)a1;
- (id)initWithInfoPlist:(id)a0 SDKPlist:(id)a1;

@end

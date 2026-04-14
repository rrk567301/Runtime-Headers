@class NSString, NSUUID, NSArray, _DYSharedCache;

@interface _DYImage : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_segments;
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *installname;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) unsigned long long pointerSize;
@property (nonatomic, readonly) unsigned long long preferredLoadAddress;
@property (nonatomic, readonly) _DYSharedCache *sharedCache;
@property (nonatomic, copy) NSArray *segments;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInternal:(BOOL)a0;

@end

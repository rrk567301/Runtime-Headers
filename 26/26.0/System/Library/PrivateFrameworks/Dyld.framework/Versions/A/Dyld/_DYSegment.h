@class NSString;

@interface _DYSegment : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long permissions;
@property (nonatomic, readonly) unsigned long long vmsize;
@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) unsigned long long preferredLoadAddress;

- (id)init;
- (id)initWithInternal:(BOOL)a0;
- (void).cxx_destruct;
- (void)getFastPathData:(struct _DYSegmentFastPathData { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; } *)a0;
- (BOOL)withSegmentData:(id /* block */)a0;

@end

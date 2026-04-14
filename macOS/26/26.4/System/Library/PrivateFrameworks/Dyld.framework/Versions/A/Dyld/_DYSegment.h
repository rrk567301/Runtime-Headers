@class NSString, OS_dispatch_data;

@interface _DYSegment : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long permissions;
@property (nonatomic, readonly) unsigned long long vmsize;
@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) unsigned long long preferredLoadAddress;
@property (nonatomic, readonly) OS_dispatch_data *data;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInternal:(BOOL)a0;

@end

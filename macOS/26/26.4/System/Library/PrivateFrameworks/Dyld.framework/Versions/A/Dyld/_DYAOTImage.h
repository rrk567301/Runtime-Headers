@class NSData;

@interface _DYAOTImage : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) unsigned long long x86Address;
@property (nonatomic, readonly) unsigned long long aotAddress;
@property (nonatomic, readonly) unsigned long long aotSize;
@property (nonatomic, readonly) NSData *aotImageKey;

- (void).cxx_destruct;
- (id)init;
- (id)initWithInternal:(BOOL)a0;

@end

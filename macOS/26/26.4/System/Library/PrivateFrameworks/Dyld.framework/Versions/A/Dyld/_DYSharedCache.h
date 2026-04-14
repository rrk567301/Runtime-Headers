@class NSUUID, NSArray, NSString;

@interface _DYSharedCache : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_images;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subCaches;
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) unsigned long long address;
@property (nonatomic, readonly) unsigned long long vmsize;
@property (nonatomic, readonly) unsigned long long preferredLoadAddress;
@property (nonatomic, readonly) BOOL mappedPrivate;
@property (nonatomic, readonly) NSArray *filePaths;
@property (nonatomic, readonly) NSUUID *aotUuid;
@property (nonatomic, readonly) unsigned long long aotAddress;
@property (nonatomic, readonly) NSString *localSymbolPath;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSArray *subCaches;

+ (id)installedSharedCaches;
+ (id)systemSharedCaches;
+ (id)systemSharedCachesForSystemPath:(id)a0;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithInternal:(BOOL)a0;
- (BOOL)pinMappings;
- (void)unpinMappings;
- (BOOL)withLocalSymbolData:(id /* block */)a0;

@end

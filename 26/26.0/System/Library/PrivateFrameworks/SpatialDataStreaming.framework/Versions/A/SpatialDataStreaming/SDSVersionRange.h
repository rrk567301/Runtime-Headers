@class NSString, SDSVersion;

@interface SDSVersionRange : NSObject {
    void /* unknown type, empty encoding */ _minVersion;
    void /* unknown type, empty encoding */ _maxVersion;
}

@property (nonatomic, readonly) SDSVersion *minVersion;
@property (nonatomic, readonly) SDSVersion *maxVersion;
@property (nonatomic, readonly) NSString *description;

+ (id)versionRangeWithMin:(id)a0 max:(id)a1;
+ (id)resolveLocalVersion:(id)a0 withRemoteVersion:(id)a1 error:(id *)a2;

- (id)init;
- (id)initWithMin:(id)a0 max:(id)a1;
- (void).cxx_destruct;
- (id)resolveWithRemoteVersion:(id)a0 error:(id *)a1;

@end

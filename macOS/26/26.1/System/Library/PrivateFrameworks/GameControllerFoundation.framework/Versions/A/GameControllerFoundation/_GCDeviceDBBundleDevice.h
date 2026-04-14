@class NSString, NSArray, NSBundle;

@interface _GCDeviceDBBundleDevice : NSObject {
    NSBundle *_bundle;
    NSArray *_personalityPaths;
}

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSArray *ioMatchingPredicates;

- (id)personalities;
- (id)description;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)init;
- (id)initWithBundle:(id)a0 dictionary:(id)a1 error:(out id *)a2;

@end

@class NSString;

@interface NSJavaConfiguration : NSObject {
    NSString *_vendorName;
}

+ (id)defaultConfiguration;
+ (id)configurationForVendor:(id)a0;
+ (id)vendorNames;

- (void)dealloc;
- (id)init;
- (id)valueForKey:(id)a0;
- (id)vendorName;
- (id)initWithVendor:(id)a0;
- (id)valueForKey:(id)a0 expandEnvironmentVariables:(char)a1;

@end

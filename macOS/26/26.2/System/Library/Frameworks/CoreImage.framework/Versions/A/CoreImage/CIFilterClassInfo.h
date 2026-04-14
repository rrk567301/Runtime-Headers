@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)cache;
+ (id)classInfoForClass:(Class)a0;
+ (void)clearCache;

- (id)initWithClass:(Class)a0;
- (id)inputKeys;
- (id)description;
- (id)inputClasses;
- (id)init;
- (id)outputKeys;
- (void)dealloc;

@end

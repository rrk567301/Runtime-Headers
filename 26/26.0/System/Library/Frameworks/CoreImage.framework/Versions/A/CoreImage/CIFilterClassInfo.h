@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)cache;
+ (void)clearCache;
+ (id)classInfoForClass:(Class)a0;

- (void)dealloc;
- (id)initWithClass:(Class)a0;
- (id)init;
- (id)inputKeys;
- (id)outputKeys;
- (id)description;
- (id)inputClasses;

@end

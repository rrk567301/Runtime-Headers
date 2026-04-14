@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (void)clearCache;
+ (id)cache;
+ (id)classInfoForClass:(Class)a0;

- (id)inputKeys;
- (id)inputClasses;
- (id)description;
- (void)dealloc;
- (id)initWithClass:(Class)a0;
- (id)outputKeys;
- (id)init;

@end

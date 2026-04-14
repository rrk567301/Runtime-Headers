@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (id)cache;
+ (id)classInfoForClass:(Class)a0;
+ (void)clearCache;

- (id)inputKeys;
- (id)inputClasses;
- (id)description;
- (id)init;
- (id)initWithClass:(Class)a0;
- (void)dealloc;
- (id)outputKeys;

@end

@class NSArray;

@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}

+ (void)clearCache;
+ (id)classInfoForClass:(Class)a0;
+ (id)cache;

- (id)outputKeys;
- (id)inputKeys;
- (id)init;
- (id)inputClasses;
- (id)description;
- (void)dealloc;
- (id)initWithClass:(Class)a0;

@end

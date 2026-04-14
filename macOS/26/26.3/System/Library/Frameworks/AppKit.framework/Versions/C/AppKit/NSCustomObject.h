@class NSString;

@interface NSCustomObject : NSObject <NSCoding> {
    NSString *className;
    id object;
    id extension;
}

+ (void)initialize;

- (id)className;
- (id)init;
- (void)setObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setClassName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)nibInstantiate;

@end

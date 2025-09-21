@class NSString;

@interface NSCustomObject : NSObject <NSCoding> {
    NSString *className;
    id object;
    id extension;
}

+ (void)initialize;

- (void)setObject:(id)a0;
- (void)dealloc;
- (id)className;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void)setClassName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)nibInstantiate;

@end

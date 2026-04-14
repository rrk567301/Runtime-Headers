@class NSString;

@interface NSCustomObject : NSObject <NSCoding> {
    NSString *className;
    id object;
    id extension;
}

+ (void)initialize;

- (id)initWithCoder:(id)a0;
- (void)setClassName:(id)a0;
- (void)setObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)className;
- (void)dealloc;
- (id)nibInstantiate;

@end

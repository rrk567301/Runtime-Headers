@class NSString;

@interface NSCustomObject : NSObject <NSCoding> {
    NSString *className;
    id object;
    id extension;
}

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)setObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)className;
- (void)setClassName:(id)a0;
- (id)nibInstantiate;

@end

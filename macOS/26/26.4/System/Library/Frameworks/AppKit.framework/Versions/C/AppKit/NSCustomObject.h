@class NSString;

@interface NSCustomObject : NSObject <NSCoding> {
    NSString *className;
    id object;
    id extension;
}

+ (void)initialize;

- (void)setClassName:(id)a0;
- (id)className;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setObject:(id)a0;
- (void)dealloc;
- (id)nibInstantiate;

@end

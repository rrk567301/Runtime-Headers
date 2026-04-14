@class NSString;

@interface NSCustomObject : NSObject <NSCoding> {
    NSString *className;
    id object;
    id extension;
}

+ (void)initialize;

- (void)setObject:(id)a0;
- (void)setClassName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)className;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)nibInstantiate;

@end

@class NSString;

@interface NSJoin : NSObject <NSCoding, NSCopying> {
    NSString *_sourceAttributeName;
    NSString *_destinationAttributeName;
}

- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSourceAttributeName:(id)a0 destinationAttributeName:(id)a1;

@end

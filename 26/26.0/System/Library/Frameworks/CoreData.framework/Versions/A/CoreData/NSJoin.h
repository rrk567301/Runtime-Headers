@class NSString;

@interface NSJoin : NSObject <NSCoding, NSCopying> {
    NSString *_sourceAttributeName;
    NSString *_destinationAttributeName;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSourceAttributeName:(id)a0 destinationAttributeName:(id)a1;

@end

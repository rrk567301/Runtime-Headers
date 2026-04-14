@class NSString;

@interface LiveFSItemPair : NSObject <NSCopying>

@property (readonly) NSString *itemId;
@property (readonly) NSString *filename;

+ (id)newWithParent:(id)a0 fname:(id)a1;
+ (id)newWithParent:(id)a0 fname:(id)a1 caseSensitivity:(BOOL)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithParent:(id)a0 fname:(id)a1 caseSensitivity:(BOOL)a2;

@end

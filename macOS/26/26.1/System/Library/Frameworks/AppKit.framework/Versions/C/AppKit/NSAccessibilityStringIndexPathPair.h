@class NSString, NSIndexPath;

@interface NSAccessibilityStringIndexPathPair : NSObject <NSCopying>

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSIndexPath *indexPath;

+ (id)pairWithString:(id)a0 indexPath:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end

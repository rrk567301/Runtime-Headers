@class NSString, NSIndexPath;

@interface NSAccessibilityStringIndexPathPair : NSObject <NSCopying>

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSIndexPath *indexPath;

+ (id)pairWithString:(id)a0 indexPath:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end

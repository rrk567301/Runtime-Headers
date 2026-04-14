@class NSNumber;

@interface _NSStringFormattingOptions : NSObject <NSCopying>

@property (retain) NSNumber *pluralizationNumber;

- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

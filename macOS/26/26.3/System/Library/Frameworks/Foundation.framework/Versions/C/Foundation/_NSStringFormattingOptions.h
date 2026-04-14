@class NSNumber;

@interface _NSStringFormattingOptions : NSObject <NSCopying>

@property (retain) NSNumber *pluralizationNumber;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end

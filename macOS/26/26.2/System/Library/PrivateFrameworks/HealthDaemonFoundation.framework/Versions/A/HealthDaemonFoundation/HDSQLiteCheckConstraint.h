@class NSString;

@interface HDSQLiteCheckConstraint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *SQLCheckConstraint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_init;
- (id)init;

@end

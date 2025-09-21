@class NSString;

@interface PFSQLiteLimitOffset : NSObject <PFSQLConvertible>

@property (readonly, nonatomic) unsigned long long limit;
@property (readonly, nonatomic) unsigned long long offset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)offset:(unsigned long long)a0;
+ (id)limit:(unsigned long long)a0;
+ (id)limit:(unsigned long long)a0 offset:(unsigned long long)a1;

@end
